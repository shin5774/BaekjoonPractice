#include <iostream>

using namespace std;

int ans = 33;
bool **arr; // b:0 w:1

void cal(int y, int x) {
    bool black = false;
    bool white = true;
    int b_count = 0, w_count = 0;
    for (int i = y; i < y + 8; i++) {
        for (int j = x; j < x + 8; j++) {
            if (arr[i][j] != black) {
                b_count++;
            } else {
                w_count++;
            }
            black = !black;
            white = !white;
        }
        black = !black;
        white = !white;
    }
    if (b_count > 32)
        b_count = 64 - b_count;
    if (w_count > 32)
        w_count = 64 - w_count;

    int min;
    if (b_count < w_count) {
        min = b_count;
    } else {
        min = w_count;
    }

    if (min < ans) {
        ans = min;
    }
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int a, b;
    cin >> a >> b;

    arr = new bool *[a];

    for (int i = 0; i < a; i++) {
        arr[i] = new bool[b];
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            char x;
            cin >> x;

            if (x == 'B') {
                arr[i][j] = false;
            } else {
                arr[i][j] = true;
            }
        }
    }

    for (int i = 0; i < a - 7; i++) {
        for (int j = 0; j < b - 7; j++) {
            cal(i, j);
        }
    }

    cout << ans;
}
