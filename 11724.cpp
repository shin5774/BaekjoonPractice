#include <iostream>
#define MAX_N 1000
using namespace std;

int n;
bool arr[MAX_N + 1][MAX_N + 1];
bool visited[MAX_N + 1];

void DFS(int idx) {
    visited[idx] = true;
    for (int i = 1; i <= n; i++) {
        if (!visited[i] && arr[idx][i]) {
            DFS(i);
        }
    }
}
int main() {
    int m;
    int cnt = 0;
    cin >> n >> m;
    while (m--) {
        int a, b;
        cin >> a >> b;
        arr[a][b] = true;
        arr[b][a] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cnt++;
            DFS(i);
        }
    }
    cout << cnt;
}
