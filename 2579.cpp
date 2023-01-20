#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int *arr = new int[n + 1];
    int **dp = new int *[n + 1];

    for (int i = 0; i < n; i++) {
        cin >> arr[i + 1];
        dp[i] = new int[3];
    }
    dp[n] = new int[3];

    dp[0][1] = 0;
    dp[0][2] = 0;

    dp[1][1] = arr[1];
    dp[1][2] = arr[1];

    for (int i = 2; i <= n; i++) {
        int a, b;
        dp[i][1] = dp[i - 1][2] + arr[i];
        a = dp[i][1];
        dp[i][2] = max(dp[i - 2][1], dp[i - 2][2]) + arr[i];
        b = dp[i][2];
    }
    cout << max(dp[n][1], dp[n][2]);
}
