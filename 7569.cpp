#include <iostream>
#include <queue>
#include <tuple>
#define MAX_N 100

using namespace std;

int m, n, h, t;
int arr[MAX_N][MAX_N][MAX_N];
queue<tuple<int, int, int>> q;

void find() {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                if (arr[i][j][k] == 1) {
                    q.push(make_tuple(i, j, k));
                }
            }
        }
    }
}

bool f_check() {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                if (arr[i][j][k] == 0) {
                    return false;
                }
            }
        }
    }
    return true;
}

bool range(int x, int y, int z) {
    if (x < 0 || x >= h || y < 0 || y >= n || z < 0 || z >= m)
        return false;
    return true;
}

bool check(int x, int y, int z) {
    if (!range(x, y, z) || !(arr[x][y][z] == 0))
        return false;

    return true;
}

void BFS() {
    find();
    int px[6] = {1, -1, 0, 0, 0, 0};
    int py[6] = {0, 0, 0, 0, 1, -1};
    int pz[6] = {0, 0, -1, 1, 0, 0};

    while (!q.empty()) {
        int sz = q.size();
        for (int i = 0; i < sz; i++) {
            int x, y, z;
            tie(x, y, z) = q.front();
            q.pop();

            for (int j = 0; j < 6; j++) {
                int tx = x + px[j];
                int ty = y + py[j];
                int tz = z + pz[j];

                if (check(tx, ty, tz)) {
                    arr[tx][ty][tz] = 1;
                    q.push(make_tuple(tx, ty, tz));
                }
            }
        }
        t++;
    }
}

int main() {
    cin >> m >> n >> h;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                cin >> arr[i][j][k];
            }
        }
    }

    BFS();

    if (f_check())
        cout << t - 1;
    else
        cout << -1;
}
