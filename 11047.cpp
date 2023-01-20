#include <iostream>
#define MAX_N 10

using namespace std;

int arr[MAX_N];

int main() {
    int n, k, i;

    int count = 0;

    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    i--;

    while (k != 0) {
        if (k / arr[i] == 0) {
            i--;
            continue;
        }
        count += k / arr[i];
        k %= arr[i];
    }

    cout << count;
}
