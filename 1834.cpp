#include <iostream>

using namespace std;

int main() {
    int n;
    long long int ans = 0;

    cin >> n;

    for (long long int i = 1; i < n; i++) {
        long long int p = i * n;
        ans += p + i;
    }

    cout << ans;
}
