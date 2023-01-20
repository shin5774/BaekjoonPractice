#include <iostream>

using namespace std;

int main() {
    int t;
    char *input = new char[51];

    cin >> t;

    while (t--) {
        cin >> input;
        int i = 0;
        int num = 0;
        int left_num = 0;
        bool check = true;
        while (input[i] != '\0') {
            if (input[i] == '(') {
                num++;
            } else if (input[i] == ')') {
                num--;
                if (num < 0) {
                    check = false;
                    break;
                }
            }
            i++;
        }

        if (num != 0) {
            check = false;
        }

        if (check) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}
