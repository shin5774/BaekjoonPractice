#include <iostream>

using namespace std;

int main() {
    int n;
    long long int ans = 4;
    long long int add = 1;
    long long int badd = 1, temp;

    cin >> n;

    for (int i = 2; i <= n; i++) {
        ans += (add * 2);
        temp = add;
        add += badd;
        badd = temp;
    }

    cout << ans;
}
