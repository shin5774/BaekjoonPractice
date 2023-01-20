#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, m;
    string input;

    map<string, char> mp;
    map<string, char> ans;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> input;
        mp[input] = true;
    }

    for (int i = 0; i < m; i++) {
        cin >> input;
        auto iter = mp.find(input);
        if (iter != mp.end()) {
            ans[input] = true;
        }
    }

    cout << ans.size() << '\n';

    for (auto iter = ans.begin(); iter != ans.end(); iter++)
        cout << iter->first << '\n';
}
