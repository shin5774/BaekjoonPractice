#include <iostream>
#define MAX_N 101

using namespace std;

bool vertex[MAX_N][MAX_N];
bool visited[MAX_N];
int n;

void dfs(int idx) {
    visited[idx] = true;

    for (int i = 1; i <= n; i++) {
        if (vertex[idx][i] && !visited[i]) {
            dfs(i);
        }
    }
}

int ans(int n) {
    int a = 0;
    for (int i = 2; i <= n; i++) {
        if (visited[i]) {
            a++;
        }
    }

    return a;
}

int main() {
    int m;

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        vertex[a][b] = true;
        vertex[b][a] = true;
    }

    dfs(1);

    cout << ans(n);
}
