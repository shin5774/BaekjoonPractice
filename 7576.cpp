#include <iostream>
#include <queue>
#define MAX_N 1000
using namespace std;

int n, m, cnt;
int arr[MAX_N][MAX_N];
int px[4] = {-1, 1, 0, 0};
int py[4] = {0, 0, -1, 1};

bool check(int x, int y) {
    if (x < 0 || x >= n || y < 0 || y >= m || arr[x][y] != 0) {
        return false;
    }

    return true;
}

void BFS() {
    queue<pair<int, int>> q;
    queue<pair<int, int>> sq;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 1)
                q.push(make_pair(i, j));
        }
    }

    while (!q.empty()) {

        while (!q.empty()) {

            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int tx = x + px[i];
                int ty = y + py[i];

                if (check(tx, ty)) {
                    arr[tx][ty] = 1;
                    sq.push(make_pair(tx, ty));
                }
            }
        }
        cnt++;
        swap(q, sq);
    }
}

bool ans() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0)
                return false;
        }
    }
    return true;
}

int main() {
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    BFS();

    if (ans()) {
        cout << cnt - 1;
    } else {
        cout << -1;
    }
}
