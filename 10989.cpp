#include <iostream>

using namespace std;

int ans[10001];
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n, max = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        ans[input]++;
        if (max < input)
            max = input;
    }

    for (int i = 1; i <= max; i++) {
        for (int j = 0; j < ans[i]; j++) {
            cout << i << '\n';
        }
    }
}
