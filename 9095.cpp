#include <iostream>

using namespace std;

int n;

int check(int k) {
    if (k == n) {
        return 1;
    } else if (k > n) {
        return 0;
    } else
        return check(k + 1) + check(k + 2) + check(k + 3);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << check(0) << '\n';
    }
}
