#include <iostream>
#include <queue>
#include <tuple> //tie 사용을 위한 header

#define MAX_N 3

using namespace std;

int n;
int arr[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];

bool check(int x, int y) {
    if (x < 0 || x >= n || y < 0 || y >= n || visited[x][y])
        return false;
    return true;
}

bool BFS() {
    queue<pair<int, int>> q;

    q.push(make_pair(0, 0));
    visited[0][0] = true;

    while (!q.empty()) {
        int x, y;
        tie(x, y) = q.front();
        q.pop();

        int num = arr[x][y];

        if (num == -1)
            return true;

        for (int i = 0; i <= 1; i++) { //오른쪽 or 아래중 선택
            int tx = x + i * num;
            int ty = y + (1 - i) * num;

            if (check(tx, ty)) {
                q.push(make_pair(tx, ty));
                visited[tx][ty] = true;
            }
        }
    }

    return false;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    if (BFS())
        cout << "HaruHaru";
    else
        cout << "Hing";
}
