#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<>());

    for (int i = 0; i < n; i++) {
        arr[i] += i + 1;
    }

    sort(arr, arr + n, greater<>());

    cout << arr[0] + 1;
}
