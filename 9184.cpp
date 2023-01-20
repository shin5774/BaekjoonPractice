#include <iostream>
#define MAX_N 21
using namespace std;

int dp[MAX_N][MAX_N][MAX_N];

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int a, b, c;

    dp[0][0][0] = 1;
    for (int i = 1; i < MAX_N; i++) {
        dp[i][0][0] = 1;
        dp[0][i][0] = 1;
        dp[0][0][i] = 1;
        for (int j = 1; j < MAX_N; j++) {
            dp[0][i][j] = 1;
            dp[i][0][j] = 1;
            dp[i][j][0] = 1;
        }
    }
    int limit = 2;

    while (limit <= MAX_N) {
        for (int i = 1; i < limit; i++) {
            for (int j = 1; j < limit; j++) {
                for (int k = 1; k < limit; k++) {
                    if (dp[i][j][k] != 0) {
                        continue;
                    }
                    if (i < j && j < k) {
                        dp[i][j][k] = dp[i][j][k - 1] + dp[i][j - 1][k - 1] -
                                      dp[i][j - 1][k];
                    } else {
                        dp[i][j][k] = dp[i - 1][j][k] + dp[i - 1][j - 1][k] +
                                      dp[i - 1][j][k - 1] -
                                      dp[i - 1][j - 1][k - 1];
                    }
                }
            }
        }
        limit++;
    }

    while (true) {
        cin >> a >> b >> c;

        if (a == -1 && b == -1 && c == -1) {
            break;
        }

        cout << "w(" << a << ", " << b << ", " << c << ") = ";

        if (a <= 0 || b <= 0 || c <= 0) {
            a = 0;
            b = 0;
            c = 0;
        } else if (a > 20 || b > 20 || c > 20) {
            a = 20;
            b = 20;
            c = 20;
        }
        cout << dp[a][b][c] << '\n';
    }
}
