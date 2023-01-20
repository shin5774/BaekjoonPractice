#include <iostream>
#include <map>
#include <memory.h>
using namespace std;

map<string, int> m;
bool s[21];
void init() {
    m["add"] = 0;
    m["remove"] = 1;
    m["check"] = 2;
    m["toggle"] = 3;
    m["all"] = 4;
    m["empty"] = 5;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    init();

    int t;
    cin >> t;

    while (t--) {
        string input;
        int x;
        cin >> input;

        switch (m[input]) {
        case 0:
            cin >> x;
            s[x] = true;
            break;
        case 1:
            cin >> x;
            s[x] = false;
            break;
        case 2:
            cin >> x;
            cout << s[x] << '\n';
            break;
        case 3:
            cin >> x;
            s[x] = !s[x];
            break;
        case 4:
            memset(s, true, sizeof(s));
            break;
        case 5:
            memset(s, false, sizeof(s));
            break;
        }
    }
}
