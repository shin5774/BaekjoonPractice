#include <iostream>

using namespace std;

int arr[100001];

void initialize(int n) {

    arr[1] = -1;
    arr[2] = 1;
    arr[3] = -1;
    arr[4] = 2;
    arr[5] = 1;

    for (int i = 6; i <= n; i++) {
        arr[i] = -1;
    }
}

int dp(int n) {
    if (n < 0) {
        return -1;
    }
    if (arr[n] == -1) {
        int a = dp(n - 2);
        int b = dp(n - 5);

        if (a == -1 && b == -1) {
            arr[n] = -1;
        } else if (a == -1) {
            arr[n] = b + 1;
        } else if (b == -1) {
            arr[n] = a + 1;
        } else {
            if (a < b) {
                arr[n] = a + 1;
            } else {
                arr[n] = b + 1;
            }
        }
    }

    return arr[n];
}

int main() {
    int n;
    cin >> n;

    initialize(n);
    cout << dp(n);
}
