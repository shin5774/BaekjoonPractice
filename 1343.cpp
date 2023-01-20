#include <iostream>

using namespace std;

int main() {
    string s, ans;

    cin >> s;
    int i = 0, sz = s.length();

    while (i < sz) {
        int cnt = 0;
        if (s[i] == '.') {
            ans.append(".");
        } else {
            int cnt = 0;
            while (s[i] == 'X' && i < sz) {
                cnt++;
                i++;
            }

            if (cnt % 2 != 0) {
                cout << -1;
                return 0;
            }

            while (cnt >= 4) {
                ans.append("AAAA");
                cnt -= 4;
            }

            if (cnt) {
                ans.append("BB");
            }
            i--;
        }
        i++;
    }

    cout << ans;
}
