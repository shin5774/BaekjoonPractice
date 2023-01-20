#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int *arr = new int[n + 1];
    int *psum = new int[n + 1];
    int sum = 0;

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    psum[0] = 0;
    for (int i = 1; i <= n; i++) {
        sum += arr[i];
        psum[i] = sum;
    }

    for (int k = 0; k < m; k++) {
        int i, j;
        cin >> i >> j;
        cout << psum[j] - psum[i - 1] << '\n';
    }
}
