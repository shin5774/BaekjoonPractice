#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int ans = 1;

    for (int i = 1; i <= n; i++) {
        ans *= i;
    }

    int temp = 1;
    for (int i = 1; i <= n - k; i++) {
        temp *= i;
    }

    ans /= temp;
    temp = 1;

    for (int i = 1; i <= k; i++) {
        temp *= i;
    }

    cout << ans / temp;
}
