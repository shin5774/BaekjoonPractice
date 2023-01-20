#include <iostream>

using namespace std;

int main() {
    int n, ip;
    int ans = -1;
    int cnt = 0;
    cin >> n;

    ip = n;

    while (n != ans) {
        int sum;
        if (ip < 10) {
            sum = ip;
        } else {
            sum = ip / 10 + ip % 10;
        }

        ans = (ip % 10) * 10 + sum % 10;
        cnt++;
        ip = ans;
    }

    cout << cnt;
}
