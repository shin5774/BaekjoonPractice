#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int count = 0;
        map<string, int> k;

        cin >> n;
        for (int i = 0; i < n; i++) {
            string key, val;
            cin >> val >> key;
            k[key]++;
        }

        int a = 1;
        for (auto iter = k.begin(); iter != k.end(); iter++) {
            // count += iter->second;
            a *= iter->second + 1;
        }
        count += a - 1;

        cout << count << '\n';
    }
}
