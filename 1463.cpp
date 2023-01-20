#include <algorithm>
#include <iostream>
#include <vector>

#define MAX_N 1000000
using namespace std;

int dp[MAX_N];

void initialize() {
    dp[0] = MAX_N;
    dp[2] = 1;
    dp[3] = 1;
}

int find(int n) {
    if (n == 1) {
        return 0;
    }
    if (dp[n] == 0) {
        vector<int> ans;
        if (n % 3 == 0) {
            ans.push_back(find(n / 3));
        }
        if (n % 2 == 0) {
            ans.push_back(find(n / 2));
        }
        ans.push_back(find(n - 1));
        sort(ans.begin(), ans.end());
        int a = ans[0];
        dp[n] = ans[0] + 1;
    }
    return dp[n];
}

int main() {
    initialize();

    int n;
    cin >> n;

    cout << find(n);
}
