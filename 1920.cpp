#include <algorithm>
#include <iostream>

#define MAX_N 100000

using namespace std;

int n, m;

long arr[MAX_N];

bool find(int target) {

    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;

        long idx = arr[mid];

        if (idx == target) {
            return true;
        } else if (idx > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cin >> m;

    for (int i = 0; i < m; i++) {
        long check;
        cin >> check;

        cout << find(check) << '\n';
    }
}
