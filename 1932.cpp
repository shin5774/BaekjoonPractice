#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int **arr = new int *[n + 1];
    int **dp = new int *[n + 1];

    for (int i = 1; i <= n; i++) {
        arr[i] = new int[i + 1];
        dp[i] = new int[i + 1];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> arr[i][j];
        }
    }

    dp[1][1] = arr[1][1];

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                dp[i][j] = dp[i - 1][j];
            } else if (j == i) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]);
            }
            dp[i][j] += arr[i][j];
        }
    }

    int ans = dp[n][1];
    for (int i = 2; i <= n; i++) {
        ans = max(ans, dp[n][i]);
    }

    cout << ans;
}
