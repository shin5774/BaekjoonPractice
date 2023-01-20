#include <iostream>
#define MAX_N 1000000
using namespace std;

int n, m;
bool *ans = new bool[MAX_N + 1];

int main() {

    cin >> m >> n;

    for (int i = 3; i <= n; i += 2) {
        ans[i] = true;
    }

    for (long long i = 3; i <= n; i += 2) {
        if (ans[i] && i * i <= n) {
            for (int j = i * i; j <= n; j += i) {
                ans[j] = false;
            }
        }
    }
    if (m == 1) {
        cout << 2 << '\n';
        m += 2;
    }
    if (m == 2) {
        cout << 2 << '\n';
        m++;
    } else if (m > 2 && m % 2 == 0) {
        m++;
    }

    for (int i = m; i <= n; i += 2) {
        if (ans[i])
            cout << i << '\n';
    }
}
