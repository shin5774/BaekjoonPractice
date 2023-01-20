#include <algorithm>
#include <iostream>

#define MAX_N 1000

using namespace std;

int arr[MAX_N];

int main() {
    int n;
    int sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = n - 1; i >= 0; i--) {
        for (int j = i; j >= 0; j--)
            sum += arr[j];
    }

    cout << sum;
}
