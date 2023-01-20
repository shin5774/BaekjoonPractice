#include <iostream>
#define MAX_N 128
using namespace std;

int blue, white;
bool arr[MAX_N][MAX_N];

void dc(int x, int y, int n) {
    bool checker = arr[y][x];
    bool divide = false;

    for (int i = y; !divide && i < y + n; i++) {
        for (int j = x; j < x + n; j++) {
            if (checker != arr[i][j]) {
                divide = true;
                break;
            }
        }
    }

    if (divide) {
        int part = n / 2;
        dc(x, y, n / 2);
        dc(x + part, y, n / 2);
        dc(x, y + part, n / 2);
        dc(x + part, y + part, n / 2);
        return;
    }
    if (checker) {
        blue++;
    } else {
        white++;
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            arr[i][j] = (a == 1);
        }
    }

    dc(0, 0, n);
    cout << white << '\n' << blue;
}
