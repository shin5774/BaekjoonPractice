#include <iostream>

using namespace std;

int n;
int dp[1001];

void initialize() {
    dp[1] = 1;
    dp[2] = 3;
}

int find(int idx) {
    if (!dp[idx]) {
        dp[idx] = (find(idx - 1) + 2 * find(idx - 2)) % 10007;
    }
    return dp[idx];
}

int main() {
    cin >> n;
    initialize();
    cout << find(n);
}
