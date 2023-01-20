#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    string input;
    cin >> input;
    int n = input.length();
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        arr[i] = input[i] - '0';
    }

    sort(arr, arr + n);

    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i];
    }
}
