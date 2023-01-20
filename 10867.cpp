#include <iostream>
#include <map>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    map<int, bool> mp;

    cin >> n;

    while (n--) {
        int a;
        cin >> a;
        mp.insert({a, true});
    }

    for (auto iter = mp.begin(); iter != mp.end(); iter++) {
        cout << iter->first << " ";
    }
}
