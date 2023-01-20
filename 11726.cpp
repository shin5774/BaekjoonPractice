#include <iostream>
#define MAX_N 1000

using namespace std;

long long dp[MAX_N + 1];
int n;

void initialize() {
    dp[1] = 1;
    dp[2] = 2;
}

long long find(int idx) {
    if (!dp[idx])
        dp[idx] = (find(idx - 1) + find(idx - 2)) % 10007;
    return dp[idx];
}
int main() {

    cin >> n;
    initialize();
    cout << find(n);
}
