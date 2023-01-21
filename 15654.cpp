#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int m;

void print(vector<int> ans) {
    for (auto &n : ans) {
        cout << n << " ";
    }
    cout << '\n';
}

void bt(vector<int> arr, vector<int> ans, int cnt) {
    if (cnt == m) {
        print(ans);
        return;
    }
    for (int i = 0; i < arr.size(); i++) {
        vector<int> narr = arr;
        vector<int> nans = ans;
        nans.push_back(arr[i]);
        narr.erase(narr.begin() + i);
        bt(narr, nans, cnt + 1);
    }
}

int main() {
    int n;
    vector<int> arr, ans;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());

    bt(arr, ans, 0);
}
