#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int *dp = new int[n];
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        int input;
        cin >> arr[i];
    }

    dp[0] = arr[0];
    dp[1] = arr[0] + arr[1];
    dp[2] = max(max(dp[1], arr[0] + arr[2]), arr[1] + arr[2]);

    for (int i = 3; i < n; i++) {
        int cur = max(dp[i - 3] + arr[i - 1], dp[i - 2]) + arr[i];
        dp[i] = max(cur, dp[i - 1]);
    }

    cout << dp[n - 1];
    
}
