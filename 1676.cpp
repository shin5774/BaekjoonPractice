#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int f_count = 0;
    int t_count = 0;

    for (int i = 2; i <= n; i++) {
        int check = i;
        while (check != 0 && check % 2 == 0) {
            t_count++;
            check /= 2;
        }
        check = i;
        while (check != 0 && check % 5 == 0) {
            f_count++;
            check /= 5;
        }
    }

    cout << min(f_count, t_count);
}
