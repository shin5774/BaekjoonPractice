#include <cmath>
#include <iostream>
#include <vector>
#define MAX_N 20

using namespace std;

int arr[MAX_N][MAX_N];
int ans = 40000;
int n;

int add(vector<int> contain) {
    int sum = 0;
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            sum += arr[contain[i]][contain[j]];
            sum += arr[contain[j]][contain[i]];
        }
    }

    return sum / 2;
}

void dp(int idx, int cnt, vector<int> contain) {
    contain.push_back(idx);
    cnt++;
    if (cnt == n / 2) {
        int j = 0;
        vector<int> ncontain;
        for (int i = 0; i < n; i++) {
            if (i!=contain[j]) {
                ncontain.push_back(i);
            }
            else{
                j++;
            }
        }
        int a = add(contain);
        int b = add(ncontain);

        int find = abs(a - b);
        if (ans > find) {
            ans = find;
        }
        return;
    }

    for (int i = idx + 1; i < n; i++) {
        dp(i, cnt, contain);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    vector<int> contain;
    dp(0, 0, contain);

    cout << ans;
}
