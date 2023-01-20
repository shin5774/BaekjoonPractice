#include <iostream>

using namespace std;

int cal(int n, int m) {
    if (n == 1 && m == 1)
        return 0;
    if (n > 1) {
        if (n % 2 == 0)
            return 2 * cal(n / 2, m) + 1;
        else
            return cal((int)(n / 2), m) + cal((int)(n / 2) + 1, m) + 1;
    } else {
        if (m % 2 == 0)
            return 2 * cal(n, m / 2) + 1;
        else
            return cal(n, (int)(m / 2)) + cal(n, (int)(m / 2) + 1) + 1;
    }
}

int main() {
    int n, m;

    cin >> n >> m;

    cout << cal(n, m);
}
