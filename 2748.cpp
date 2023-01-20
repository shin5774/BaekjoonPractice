#include <iostream>

using namespace std;

int main() {
    int n;
    long long int a = 0;
    long long int b = 1;
    long long int ans = 0;
    cin >> n;

    if (n == 1) {
        ans = 1;
    }
    for (int i = 2; i <= n; i++) {
        ans = a + b;
        a = b;
        b = ans;
    }
    cout << ans;
}
