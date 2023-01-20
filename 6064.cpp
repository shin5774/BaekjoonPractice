#include <iostream>

using namespace std;

int min(int a, int b) {
    if (b == 0) {
        return a;
    }
    return min(b, a % b);
}
int find(int a, int b) { return (a * b) / min(a, b); }
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n, x, y, max; // max는 최대공약수
        bool flag = true;
        cin >> m >> n >> x >> y;
        max = find(n, m);
        int cnt = max / m - 1;
        int check = x;

        for (int i = 0; i <= cnt; i++) {
            while (check > n) {
                check -= n;
            }

            if (check == y) {
                cout << m * i + x << '\n';
                flag = false;
                break;
            }
            check += m;
        }

        if (flag) {
            cout << -1 << '\n';
        }
    }
}
