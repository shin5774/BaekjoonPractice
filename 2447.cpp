#include <iostream>
#define MAX_N 6561

using namespace std;

bool arr[MAX_N][MAX_N];

void rec(int y, int x, int n) {
    if (n == 3) {
        for (int i = y; i < y + 3; i++) {
            for (int j = x; j < x + 3; j++) {
                if (i != y + 1 || j != x + 1) {
                    arr[i][j] = true;
                }
            }
        }
        return;
    }

    int div = n / 3;

    rec(y, x, div);
    rec(y, x + div, div);
    rec(y, x + (div * 2), div);
    rec(y + div, x, div);
    rec(y + div, x + (div * 2), div);
    rec(y + (div * 2), x, div);
    rec(y + (div * 2), x + div, div);
    rec(y + (div * 2), x + (div * 2), div);
}

int main() {
    int n;
    cin >> n;
    rec(0, 0, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j])
                cout << "*";
            else
                cout << " ";
        }
        cout << '\n';
    }
}
