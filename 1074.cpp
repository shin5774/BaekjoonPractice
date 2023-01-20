#include <cmath>
#include <iostream>

using namespace std;

long long find(long long n, int c, int r) {
    if (n > 2) {
        if (c >= n / 2) {
            if (r >= n / 2) { // 4번째
                return (n * n * 3 / 4) + find(n / 2, c - (n / 2), r - (n / 2));
            } else { // 3번쨰
                return (n * n * 2 / 4) + find(n / 2, c - (n / 2), r);
            }
        } else {
            if (r >= n / 2) { //두번째
                return (n * n * 1 / 4) + find(n / 2, c, r - (n / 2));
            } else { //첫번째
                return find(n / 2, c, r);
            }
        }
    } else {
        return c * 2 + r;
    }
}

int main() {
    int n, c, r;

    cin >> n >> c >> r;

    long long range = pow(2, n);
    cout << find(range, c, r);
}
