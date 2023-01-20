#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
#define MAX_N 100001

using namespace std;

bool visited[MAX_N];
int ans[MAX_N];
int cnt = 1, r;

void bfs(vector<int> *vertex) {
    queue<int> q;
    q.push(r);
    visited[r] = true;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        ans[cur] = cnt++;

        for (int i = 0; i < vertex[cur].size(); i++) {
            int next = vertex[cur][i];
            if (!visited[next]){
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m;

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

    bfs(vertex);

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << '\n';
    }
}
