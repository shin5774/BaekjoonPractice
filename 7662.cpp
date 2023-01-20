#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--) {
        int k;
        multiset<int> m;
        cin >> k;

        while (k--) {
            char c;
            int n;

            cin >> c >> n;

            if (c == 'D') {
                if (m.empty())
                    continue;
                if (n == 1) {
                    m.erase(--m.end());
                } else {
                    m.erase(m.begin());
                }

            } else {
                m.insert(n);
            }
        }

        if (m.empty())
            cout << "EMPTY" << '\n';
        else {
            cout << *(m.rbegin()) << " " << *m.begin() << '\n';
        }
    }
}
