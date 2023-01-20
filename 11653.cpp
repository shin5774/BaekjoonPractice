#include <iostream>

using namespace std;

int main() {
    int n;
    int i = 2;
    cin >> n;

    while (n != 1) {
        if (n % i == 0) {
            cout << i << '\n';
            n /= i;
        } else
            i++;
    }
}
