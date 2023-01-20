#include <iostream>
#include <string.h>
using namespace std;

bool arr[26];

int main() {
    int n;
    int ans = 0;

    cin >> n;

    while (n--) {
        string input;
        bool flag = true;

        cin >> input;
        char check = input[0];
        arr[check - 'a'] = true;

        for (int i = 1; i < input.length(); i++) {
            char idx = input[i];

            if (check != idx) {
                if (arr[idx - 'a']) {
                    flag = false;
                    break;
                }
                check = idx;
                arr[idx - 'a'] = true;
            }
        }
        if (flag)
            ans++;
        memset(arr, false, 26 * sizeof(bool));
    }
    cout << ans;
}
