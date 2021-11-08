#include <iostream>

using namespace std;

int main() {
    int num1, num2 = 0;
    cin >> num1;
    num2 = num1;
    for (int i = 0; i < 7; i++) {
        cin >> num1;
        if ((abs(num1 - num2) == 1)) {
            num2 = num1;
        } else {
            break;
        }
    }

    if (num1 == num2) {
        if (num1 == 8) {
            cout << "ascending";
        } else
            cout << "descending";
    } else {
        cout << "mixed";
    }
}
