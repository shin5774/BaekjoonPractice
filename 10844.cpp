#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long **dp = new long long *[n + 1];

    for (int i = 0; i <= n; i++) {
        dp[i] = new long long[10];
    }

    dp[1][0] = 0;

    for (int i = 1; i < 10; i++) {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 0) {
                dp[i][0] = dp[i - 1][1];
            } else if (j == 9) {
                dp[i][9] = dp[i - 1][8];
            } else
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
        }
    }

    long long ans = dp[n][0];

    for (int i = 1; i < 10; i++) {
        ans = (ans + dp[n][i]) % 1000000000;
    }

    cout << ans;
}
