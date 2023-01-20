#include <algorithm>
#include <iostream>
#include <vector>

#define MAX_N 100001

using namespace std;

bool visited[MAX_N];
int ans[MAX_N];
int cnt = 1;

void dfs(int idx, vector<int> *vertex) {
    ans[idx] = cnt++;
    visited[idx] = true;

    for (int i = 0; i < vertex[idx].size(); i++) {
        int next = vertex[idx][i];
        if (!visited[next]) {
            dfs(next, vertex);
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
        sort(vertex[i].begin(), vertex[i].end(), greater<>());
    }

    dfs(r, vertex);

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << '\n';
    }
}
