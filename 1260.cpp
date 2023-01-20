#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
#define MAX_N 1001

using namespace std;

vector<int> dfs_ans;
vector<int> bfs_ans;
bool visited[MAX_N];

void dfs(int idx, vector<int> *vertex) {
    dfs_ans.push_back(idx);
    visited[idx] = true;

    for (auto &next : vertex[idx]) {
        if (!visited[next])
            dfs(next, vertex);
    }
}

void bfs(int start, vector<int> *vertex) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        bfs_ans.push_back(cur);

        for (auto &next : vertex[cur]) {
            if (!visited[next]) {
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m, r;

    cin >> n >> m >> r;

    vector<int> *vertex = new vector<int>[n + 1];

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        vertex[a].push_back(b);
        vertex[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        sort(vertex[i].begin(), vertex[i].end());
    }

    dfs(r, vertex);

    for (int i = 1; i <= n; i++)
        visited[i] = false;

    bfs(r, vertex);

    for (auto &next : dfs_ans) {
        cout << next << " ";
    }
    cout << '\n';
    for (auto &next : bfs_ans) {
        cout << next << " ";
    }
}
