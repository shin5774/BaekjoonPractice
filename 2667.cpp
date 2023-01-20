#include <algorithm>
#include <iostream>
#include <vector>

#define MAX_N 25

using namespace std;

int n, cnt;
bool arr[MAX_N][MAX_N];

int mv[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
vector<int> ans;

bool range(int y, int x) {
    if (x < 0 || x >= n || y < 0 || y >= n)
        return false;
    return true;
}

void dfs(int y, int x) {
    arr[y][x] = false;
    cnt++;

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

    cin >> n;

    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        for (int j = 0; j < n; j++) {
            arr[i][j] = (input[j] == '1');
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j]) {
                dfs(i, j);
                ans.push_back(cnt);
                cnt = 0;
            }
        }
    }
    sort(ans.begin(), ans.end());

    cout << ans.size() << '\n';
    for (auto &a : ans) {
        cout << a << '\n';
    }
}
