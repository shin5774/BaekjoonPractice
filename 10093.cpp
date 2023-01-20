#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    long long int a, b;

    cin >> a >> b;

    if (a > b) {
        long long int temp = a;
        a = b;
        b = temp;
    }

    if (a == b) {
        cout << 0 << '\n';
        return 0;
    } else {
        long long int sb = b - a - 1;
        cout << sb << '\n';
    }
    for (long long int i = a + 1; i < b; i++) {
        cout << i << " ";
    }
}
