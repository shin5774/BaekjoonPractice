#include <iostream>
#define MAX_N 300

using namespace std;

int arr[MAX_N + 1][MAX_N + 1];

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m, t;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];
    }

    cin >> t;

    while (t--) {
        int i, j, x, y;
        long long int sum = 0;

        cin >> i >> j >> x >> y;

        for (int a = i; a <= x; a++) {
            for (int b = j; b <= y; b++)
                sum += arr[a][b];
        }

        cout << sum << '\n';
    }
}
