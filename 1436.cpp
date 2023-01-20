#include <iostream>
#include <string>

using namespace std;

int main() {
    int ans = 666;
    int cnt = 0;
    int n;
    cin >> n;

    while (true) {
        string conv = to_string(ans);
        if (conv.find("666") != string::npos) {
            cnt++;
            if (n == cnt) {
                break;
            }
        }
        ans++;
    }

    cout << ans;
}
