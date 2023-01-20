#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    while (true) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        int x, y, z;

        if (a > b) {
            if (a > c) {
                x = a;
                y = b;
                z = c;
            } else {
                x = c;
                y = a;
                z = b;
            }
        } else { // a<=b
            if (b > c) {
                x = b;
                y = a;
                z = c;
            } else {
                x = c;
                y = a;
                z = b;
            }
        }

        if (x * x == (y * y + z * z)) {
            cout << "right" << '\n';
        } else {
            cout << "wrong" << '\n';
        }
    }
}
