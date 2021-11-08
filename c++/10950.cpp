#include <iostream>

using namespace std;

int main() {
    int num, a, b;
    int *ans = new int(num);
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> a >> b;
        ans[i] = a + b;
    }

    for (int i = 0; i < num; i++) {
        cout << ans[i] << '\n';
    }
}
