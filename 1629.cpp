#include <iostream>

using namespace std;

long long ans(long long a, long long b, long long c) {
    if (b == 1) {
        return a % c;
    }

    int div = b / 2;
    if (b % 2 == 0)
        return (ans(a, div, c) * ans(a, div, c)) % c;
    return (ans(a, div + 1, c) * ans(a, div, c)) % c;
}

int main() {
    long long a, b, c;

    cin >> a >> b >> c;

    cout << ans(a, b, c);
}
