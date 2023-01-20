#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int num = arr[0];
    int max = 0;
    int asc = 0;

    for (int i = 1; i < n; i++) {
        if (num < arr[i]) {
            asc += (arr[i] - num);
        } else {
            if (max < asc) {
                max = asc;
            }
            asc = 0;
        }
        num = arr[i];
    }
    if (max < asc) {
        max = asc;
    }

    cout << max;
}
