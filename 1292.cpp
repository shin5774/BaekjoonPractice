#include <iostream>

using namespace std;

int main() {
    int a, b;
    long long int sum = 0;
    cin >> a >> b;

    int cnt = 1;
    int i = 1;

    for (int idx = 1; idx <= b; idx++) {
        if (idx == i) {
            i += cnt;
            cnt++;
        }

        if (idx < i) {
            if (idx >= a) {
                sum += (cnt - 1);
            }
        }
    }

    cout << sum;
}
