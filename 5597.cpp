#include <iostream>

using namespace std;

bool check[29];

int main() {
    int a, idx = 1, cnt = 0;
    for (int i = 0; i < 28; i++) {
        cin >> a;
        check[a] = true;
    }

    while (cnt < 2) {
        if (!check[idx]) {
            cout << idx << '\n';
            cnt++;
        }
        idx++;
    }
}
