#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int l, p, v;
    int t = 1;
    l = -1;
    p = -1;
    v = -1;

    while (true) {
        int ans;
        cin >> l >> p >> v;

        if (l == 0 && p == 0 && v == 0)
            break;
        ans = l * (v / p);

        if (v % p < l) {
            ans += v % p;
        } else
            ans += l;

        cout << "Case " << t << ": " << ans << '\n';
        t++;
    }
}
