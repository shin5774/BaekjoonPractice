#include <cmath>
#include <iostream>

#define MAX_N 10000

using namespace std;

bool prime[MAX_N + 1];

int main() {
    int n, m, ans;
    int sum = 0;
    cin >> n >> m;

    prime[2] = true;
    for (int i = 3; i <= m; i += 2) {
        prime[i] = true;
    }

    for (int i = 3; i <= (int)sqrt(m); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= m; j += i) {
                prime[j] = false;
            }
        }
    }

    for (int i = m; i >= n; i--) {
        if (prime[i]) {
            sum += i;
            ans = i;
        }
    }

    if (sum == 0) {
        cout << -1;
    } else {
        cout << sum << '\n' << ans;
    }
}
