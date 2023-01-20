#include <iostream>

using namespace std;

int main() {
    long long int a, b, sum;
    cin >> a >> b;

    if (a > b) {
        sum = a;
        a = b;
        b = sum;
    }
    sum = (b - a + 1) * (a + b) / 2;

    cout << sum;
}
