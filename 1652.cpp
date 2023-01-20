#include <iostream>
#define MAX_N 100

using namespace std;

char arr[MAX_N][MAX_N];

int row, col;

int main() {
    int n;
    int count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == '.') {
                count++;
            }
            if (arr[i][j] == 'X') {
                if (count >= 2) {
                    row++;
                }
                count = 0;
            }

            if (j == n - 1 && count >= 2) {
                count = 0;
                row++;
            }
        }
    }

    if (count >= 2)
        row++;

    count = 0;

    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j][i] == '.') {
                count++;
            }
            if (arr[j][i] == 'X') {
                if (count >= 2) {
                    col++;
                }
                count = 0;
            }

            if (j == n - 1 && count >= 2) {
                count = 0;
                col++;
            }
        }
    }

    if (count >= 2)
        col++;

    cout << row << " " << col;
}
