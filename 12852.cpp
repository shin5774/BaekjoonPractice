#include <iostream>
#define MAX_NUM 1000001
using namespace std;

int main() {
    int n;
    cin >> n;

    int **dp = new int *[n + 1];
    for (int i = 0; i <= n; i++) {
        dp[i] = new int[2];
    }

    dp[0][0] = MAX_NUM;
    dp[1][0] = 0;
    dp[1][1] = 0;

    for (int i = 2; i <= n; i++) {
        int cand[3];
        cand[0] = dp[i - 1][0];
        cand[1] = i % 2 == 0 ? dp[i / 2][0] : MAX_NUM;
        cand[2] = i % 3 == 0 ? dp[i / 3][0] : MAX_NUM;

        int idx = 0, min_cand = cand[0];

        for (int j = 1; j <= 2; j++) {
            if (min_cand > cand[j]) {
                idx = j;
                min_cand = cand[j];
            }
        }

        dp[i][0] = min_cand + 1;
        if (idx == 0)
            dp[i][1] = i - 1;
        else if (idx == 1)
            dp[i][1] = i / 2;
        else
            dp[i][1] = i / 3;
    }

    cout << dp[n][0] << '\n';
    int idx = n;
    while (idx != 0) {
        cout << idx << " ";
        idx = dp[idx][1];
    }
}
