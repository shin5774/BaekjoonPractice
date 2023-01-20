#include <iostream>
#include <math.h>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--) {
        int a, b, ans;
        cin >> a >> b;
        a = a % 10;
        b = b % 4; // 4 1 2 3
        if (b == 0)
            b = 4;
        ans = a;
        for (int i = 1; i < b; i++) {
            ans *= a;
        }
        ans %= 10;

        if (ans == 0)
            cout << 10 << '\n';
        else
            cout << ans << '\n';

        // 1:1 2:2,4,8,6  3:3,9,7,1  4:4,6 5:5 6:6 7:7,9,3,1 8:8,4,2,6  9:9,1
        // 0:0
    }
}
