#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;

    cin >> t;

    for (int c = 1; c <= t; c++) {
        int n, a, g = 0;
        cin >> n;
        int *arr = new int[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        a = arr[0];

        for (int i = 1; i < n; i++) {
            int ng = abs(a - arr[i]);
            if (ng > g)
                g = ng;
            a = arr[i];
        }

        cout << "Class " << c << '\n';
        cout << "Max " << arr[n - 1] << ", Min " << arr[0] << ", Largest gap "
             << g << '\n';
    }
}
