#include <iostream>
#include <queue>
#include <string.h> //memset 사용을 위한 header
#include <tuple>    //tie 사용을 위한 header

#define MAX_N 10000

using namespace std;

bool visited[MAX_N];

int D(int n) {
    int a = 2 * n;
    if (a >= MAX_N)
        a %= MAX_N;
    return a;
}

int S(int n) {
    if (n == 0)
        return 9999;
    return n - 1;
}

int L(int n) { return (n % 1000) * 10 + (n / 1000); }

int R(int n) { return (n / 10) + (n % 10) * 1000; }

string BFS(int start, int end) {
    queue<pair<int, string>> q;
    q.push(make_pair(start, ""));
    visited[start] = true;

    while (!q.empty()) {
        int a;
        string b;

        tie(a, b) = q.front();
        q.pop();

        if (a == end) {
            return b;
        }

        int d, s, l, r;
        d = D(a);
        s = S(a);
        l = L(a);
        r = R(a);

        if (!visited[d]) {
            q.push(make_pair(d, b + "D"));
            visited[d] = true;
        }
        if (!visited[s]) {
            q.push(make_pair(s, b + "S"));
            visited[s] = true;
        }
        if (!visited[l]) {
            q.push(make_pair(l, b + "L"));
            visited[l] = true;
        }
        if (!visited[r]) {
            q.push(make_pair(r, b + "R"));
            visited[r] = true;
        }
    }
}

int main() {
    // 72~73:입출력 시간을 단축하기 위한 코드
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << BFS(a, b) << '\n';
        memset(visited, false,
               MAX_N * sizeof(bool)); //매 test마다 visited 초기화
    }
}
