#include <iostream>
#include <queue>
#include <string.h>
#include <tuple>

using namespace std;

int n;
bool visited[300][300];

int mv[8][2] = {
    {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}, {1, -2}, {2, -1}, {2, 1}, {1, 2},
};

void problem() {
    int cx, cy, dx, dy, cnt = 0;
    queue<pair<int, int>> q;
    cin >> n >> cy >> cx >> dy >> dx;

    q.push({cy, cx});

    while (!q.empty()) {
        int sz = q.size();
        while (sz--) {
            pair<int, int> p = q.front();
            int y = p.first;
            int x = p.second;
            q.pop();
            if (x == dx && y == dy) {
                cout << cnt << '\n';
                return;
            }

            for (int i = 0; i < 8; i++) {
                int ny = y + mv[i][0];
                int nx = x + mv[i][1];

                if (nx >= 0 && nx < n && ny >= 0 && ny < n &&
                    !visited[ny][nx]) {
                    q.push({ny, nx});
                    visited[ny][nx] = true;
                }
            }
        }
        cnt++;
    }
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--) {
        problem();
        memset(visited, 0, sizeof(visited));
    }
}
