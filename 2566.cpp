#include <iostream>

using namespace std;

int main() {
    int max, row, col, max_idx = 1;

    cin >> max;
    for (int i = 2; i <= 81; i++) {
        int input;
        cin >> input;
        if (max < input) {
            max = input;
            max_idx = i;
        }
    }
    row = max_idx / 9 + 1;
    col = max_idx % 9;
    if (col == 0) {
        row--;
        col = 9;
    }
    cout << max << '\n' << row << " " << col;
}
