#include <iostream>

using namespace std;

int main() {
    int ans, ans_idx = 1;
    cin >> ans;

    for (int i = 2; i <= 9; i++) {
        int input;
        cin >> input;
        if (input > ans) {
            ans = input;
            ans_idx = i;
        }
    }
    cout << ans << '\n' << ans_idx;
}
