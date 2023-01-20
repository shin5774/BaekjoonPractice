#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m;

    cin >> n >> m;

    int *arr = new int[n + m];

    for (int i = 0; i < n + m; i++)
        cin >> arr[i];

    sort(arr, arr + n + m);

    for (int i = 0; i < n + m; i++)
        cout << arr[i] << " ";
}
