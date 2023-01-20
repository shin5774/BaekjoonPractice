#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int arr[9];
    int ans[9] = {0, 0, 1, 1, 1, 1, 1, 1, 1};
    for (int i = 0; i < 9; i++)
        cin >> arr[i];

    sort(arr, arr + 9);

    do {
        int sum = 0;
        for (int i = 0; i < 9; i++) {
            if (ans[i] == 1) {
                sum += arr[i];
            }
        }
        if (sum == 100)
            break;
    } while (next_permutation(ans, ans + 9));

    for (int i = 0; i < 9; i++) {
        if (ans[i] == 1) {
            cout << arr[i] << '\n';
        }
    }
}
