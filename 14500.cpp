#include <iostream>
#define MAX_N 500

using namespace std;

int n, m, max;
int arr[MAX_N][MAX_N];

void find() {

    // 1*4
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 3; j++) {
            int sum = 0;
            for (int k = 0; k < 4; k++) {
                sum += arr[i][j + k];
                if (max < sum)
                    max = sum;
            }
        }
    }

    // 2*2
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            int sum = 0;
            sum +=
                (arr[i][j] + arr[i][j + 1] + arr[i + 1][j] + arr[i + 1][j + 1]);
            if (max < sum)
                max = sum;
        }
    }
    // 3*1+1*1

    // 2*2+2*2

    // 1*3+1*1
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    find(i);

    cout << max;
}
