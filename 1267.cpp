#include <iostream>

using namespace std;

int main() {
    int n;
    int y = 0;
    int m = 0;

    cin >> n;

    while (n--) {
        int a;
        cin >> a;

        y += (a / 30) * 10;
        if (a % 30 >= 0) {
            y += 10;
        }

        m += (a / 60) * 15;
        if (a % 60 >= 0) {
            m += 15;
        }
    }

    if (y < m) {
        cout << "Y " << y;
    } else if (y > m) {
        cout << "M " << m;
    } else
        cout << "Y M " << y;
}
