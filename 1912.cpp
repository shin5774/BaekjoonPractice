#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int *arr = new int[n];
    int *dp = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        dp[i] = 0;
    }

    dp[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        dp[i] = max(arr[i], dp[i + 1] + arr[i]);
    }

    int ans = -1000001;

    for (int i = 0; i < n; i++) {
        if (ans < dp[i]) {
            ans = dp[i];
        }
    }

    cout << ans;
}
