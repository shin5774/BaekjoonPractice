#include <climits>
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t = 3;

    while (t--) {
        int n;
        int over = 0;
        int under = 0;
        long long sum = 0;
        cin >> n;

        for (int i = 0; i < n; i++) {
            long long input;
            cin >> input;

            if (LLONG_MAX - sum < input) {
                over++;
                input -= (LLONG_MAX - sum);
                sum = input;
            } else if (LLONG_MIN)
                sum += input;
        }

        if (sum > 0)
            cout << "+" << '\n';
        else if (sum == 0)
            cout << "0" << '\n';
        else
            cout << "-" << '\n';
    }
}
