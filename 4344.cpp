#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, cnt = 0;
        float avg = 0;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            avg += arr[i];
        }
        avg /= n;

        for (int i = 0; i < n; i++) {
            if (arr[i] > avg)
                cnt++;
        }
        float ans = (float)cnt / n;
        cout << fixed;
        cout.precision(3);
        cout << ans * 100 << "%" << '\n';
    }
}
