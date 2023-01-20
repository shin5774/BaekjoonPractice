#include <iostream>

using namespace std;

int arr[10];

int main() {
    int input;
    int idx;
    int spn;
    int max = 0;
    cin >> input;

    while (input) {
        arr[input % 10]++;
        input /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (max < arr[i] && !(i == 6 || i == 9)) {
            idx = i;
            max = arr[i];
        }
    }

    spn = arr[6] + arr[9];
    if (spn % 2 != 0) {
        spn++;
    }
    spn /= 2;

    if (max > spn) {
        cout << max;
    } else
        cout << spn;
}
