#include <iostream>
#include <string>

using namespace std;

int main() {
    int input, ans = 0;
    cin >> input;

    for (int i = 1; i < input; i++) {
        int find = i;
        string s_i = to_string(i);

        for (int j = 0; j < s_i.length(); j++) {
            find += s_i[j] - '0';
        }

        if (find == input) {
            ans = i;
            break;
        }
    }

    cout << ans;
}
