#include <iostream>

using namespace std;

int main() {
    int max = 0;
    int csr, num;
    for (int i = 0; i < 9; i++) {
        cin >> num;
        if (max < num) {
            max = num;
            csr = i + 1;
        }
    }

    cout << max << endl << csr;
}
