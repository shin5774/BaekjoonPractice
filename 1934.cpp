#include <iostream>
#include <math.h>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b) { return abs(a * b) / gcd(a, b); }

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a < b) {
            int temp = b;
            b = a;
            a = temp;
        }

        cout << lcm(a, b) << '\n';
    }
}
