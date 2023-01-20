#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> *vertex = new vector<int>[n + 1];
    bool *visited = new bool[n + 1];
    int *ans = new int[n + 1];
    queue<int> q;

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        vertex[a].push_back(b);
        vertex[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        sort(vertex[i].begin(), vertex[i].end());
        visited[i] = false;
        ans[i] = 0;
    }

    ans[1] = 1;
    q.push(1);
    visited[1] = true;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (auto &next : vertex[cur]) {
            if (!visited[next]) {
                q.push(next);
                ans[next] = cur;
                visited[next] = true;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        cout << ans[i] << '\n';
    }
}
