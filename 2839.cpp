#include <iostream>
#define MAX_N 5000
using namespace std;

int *dp = new int[MAX_N + 1];

void initialize(int n) {
    for (int i = 1; i <= n; i++) {
        dp[i] = -1;
    }
    dp[3] = 1;
    dp[5] = 1;
}
int check(int three, int five) {
    if (three == -1 && five == -1) {
        return -1;
    } else if (three == -1 && five != -1) {
        return five + 1;
    } else if (three != -1 && five == -1) {
        return three + 1;
    } else {
        if (three > five) {
            return five + 1;
        } else {
            return three + 1;
        }
    }
}
int main() {
    int n;
    cin >> n;

    initialize(n);
    for (int i = 6; i <= n; i++) {
        dp[i] = check(dp[i - 3], dp[i - 5]);
    }

    cout << dp[n];
}
