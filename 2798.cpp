#include <iostream>

using namespace std;

int main() {
    int n, lim;
    int max = 0;
    cin >> n >> lim;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 2; i++) {
        int a = arr[i];
        for (int j = i + 1; j < n - 1; j++) {
            int b = arr[j];
            for (int k = j + 1; k < n; k++) {
                int sum = a + b + arr[k];
                if (sum > max && sum <= lim) {
                    max = sum;
                }
            }
        }
    }

    cout << max;
    
}
