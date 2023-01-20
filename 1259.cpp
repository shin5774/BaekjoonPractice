#include <iostream>
#include <string>

using namespace std;

int main() {
    int input;

    while (cin >> input) {
        bool ans = true;
        if (input == 0)
            break;
        string check = to_string(input); // int to string
        int len = check.length();

        for (int i = 0; i < len / 2 && ans; i++) {
            if (check.at(i) != check.at(len - i - 1))
                ans = false;
        }
        if (ans)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
}
