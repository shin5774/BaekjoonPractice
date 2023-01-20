#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n, max;
    float sum = 0;
    cin >> n;
    float *arr = new float[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    max = arr[n - 1];

    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] / max * 100;
        sum += arr[i];
    }

    cout << sum / n;
}
