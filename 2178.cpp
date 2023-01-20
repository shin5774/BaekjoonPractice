#include <iostream>
#include <queue>
#include <tuple>

using namespace std;
int n, m;

bool range(int y, int x) {
    if (y < 0 || y >= n || x < 0 || x >= m)
        return false;
    return true;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int ans;
    queue<tuple<int, int, int>> q; // y,x,mv
    int mv[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    cin >> n >> m;

    bool **arr = new bool *[n];

    for (int i = 0; i < n; i++) {
        arr[i] = new bool[m];

        string input;
        cin >> input;

        for (int j = 0; j < m; j++) {
            arr[i][j] = (input[j] == '1');
        }
    }

    q.push({0, 0, 1});
    arr[0][0] = false;

    while (!q.empty()) {
        int y, x, cnt;
        tie(y, x, cnt) = q.front();
        q.pop();

        if (y == n - 1 && x == m - 1) {
            ans = cnt;
            break;
        }

        for (int i = 0; i < 4; i++) {
            int ny = y + mv[i][0];
            int nx = x + mv[i][1];

            if (range(ny, nx) && arr[ny][nx]) {
                q.push({ny, nx, cnt + 1});
                arr[ny][nx] = false;
            }
        }
    }

    cout << ans;
}
