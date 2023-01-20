#include <iostream>

using namespace std;

int main() {
    int level;
    int ans = 5;

    cin >> level;

    for (int i = 2; i <= level; i++) {
        int ad = i + 1;
        ans += (ad * 2 + (ad - 2));
        ans %= 45678;
    }

    cout << ans;
}
