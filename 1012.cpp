#include <iostream>
#define MAX_LEN 50

using namespace std;

bool arr[MAX_LEN][MAX_LEN];
int n, m;

int mv[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool range(int y, int x) {
    if (x < 0 || x >= m || y < 0 || y >= n)
        return false;
    return true;
}

void dfs(int y, int x) {
    arr[y][x] = false;

    for (int i = 0; i < 4; i++) {
        int ny = y + mv[i][0];
        int nx = x + mv[i][1];
        if (range(ny, nx) && arr[ny][nx]) {
            dfs(ny, nx);
        }
    }
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> m >> n >> k;

        for (int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;

            arr[y][x] = true;
        }
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j]) {
                    dfs(i, j);
                    ans++;
                }
            }
        }

        cout << ans << '\n';
    }
}
