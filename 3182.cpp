#include <iostream>
#include <string.h>

#define MAX_N 1001

using namespace std;

int n;
bool arr[MAX_N][MAX_N];
bool visited[MAX_N];

int DFS(int idx) {
    visited[idx] = true;

    for (int i = 1; i <= n; i++) {
        if (arr[idx][i] && !visited[i])
            return 1 + DFS(i);
    }

    return 1;
}

int main() {
    int max = 0;
    int idx = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;

        arr[i][a] = true; //단방향 그래프
    }

    for (int i = 1; i <= n; i++) {
        int find = DFS(i);

        if (max < find) {
            max = find;
            idx = i;
        }

        memset(visited, false, MAX_N * sizeof(bool)); // 매 케이스마다 초기화
    }

    cout << idx;
}
