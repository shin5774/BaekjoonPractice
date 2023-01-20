#include <iostream>

using namespace std;

int main() {
    string input;
    int ans[26];
    cin >> input;

    for (int i = 0; i < 26; i++) {
        ans[i] = -1;
    }

    for (int i = 0; i < input.length(); i++) {
        int check = input[i] - 'a';

        if (ans[check] == -1) {
            ans[check] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << ans[i] << " ";
    }
}
