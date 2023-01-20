#include <iostream>

using namespace std;

int find(int k, int n) {

    if (k == 0) {
        return n;
    }

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += find(k - 1, i);
    }

    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k >> n;
        cout << find(k, n) << '\n';
    }
}
