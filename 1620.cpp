#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m;
    map<int, string> mp;
    map<string, int> rmp;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        string input;
        cin >> input;
        mp[i] = input;
        rmp[input] = i;
    }

    for (int i = 0; i < m; i++) {
        string find;
        cin >> find;
        if (find[0] - '0' >= 0 && find[0] - '0' < 10) {
            cout << mp[stoi(find)] << '\n';
        } else {
            cout << rmp[find] << '\n';
        }
    }
}
