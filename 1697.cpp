#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

bool visited[100001];

int main() {
    int n, k, ans = 0;
    queue<pair<int, int>> q;
    cin >> n >> k;

    q.push({n, 0});

    while (!q.empty()) {
        int cur, cnt;
        tie(cur, cnt) = q.front();
        q.pop();
        visited[cur] = true;

        if (cur == k) {
            cout << cnt;
            return 0;
        }

        if (cur > 0 && !visited[cur - 1])
            q.push({cur - 1, cnt + 1});
        if (cur < 100000 && !visited[cur + 1])
            q.push({cur + 1, cnt + 1});
        if (cur <= 50000 && !visited[cur * 2])
            q.push({cur * 2, cnt + 1});
    }
}
