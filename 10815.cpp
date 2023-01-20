#include <algorithm>
#include <iostream>
using namespace std;

int n;
int *arr = new int[n];

bool bs(int find, int a, int b) {

    while (a <= b) {
        int mid = (a + b) / 2;
        if (arr[mid] == find) {
            return true;
        } else if (arr[mid] > find) {
            b = mid - 1;
        } else {
            a = mid + 1;
        }
    }

    return false;
}

int main() {
    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cin >> m;

    while (m--) {
        int a;
        cin >> a;
        cout << bs(a, 0, n - 1) << " ";
    }
}
