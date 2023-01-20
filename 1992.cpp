#include <iostream>
#define MAX_N 64

using namespace std;

bool arr[MAX_N][MAX_N];

void find(int x, int y, int n) {
    bool checker = arr[y][x];
    bool correct = true;
    for (int i = y; correct && i < y + n; i++) {
        for (int j = x; j < x + n; j++) {
            if (checker != arr[i][j]) {
                correct = false;
                break;
            }
        }
    }

    if (correct) {
        cout << checker;
        return;
    }

    cout << "(";
    find(x, y, n / 2);
    find(x + n / 2, y, n / 2);
    find(x, y + n / 2, n / 2);
    find(x + n / 2, y + n / 2, n / 2);
    cout << ")";
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;

        for (int j = 0; j < n; j++) {
            arr[i][j] = (input[j] == '1');
        }
    }

    find(0, 0, n);
}
