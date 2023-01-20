#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

int main() {
    int sum = 0;

    map<int, int> mp;

    for (int i = 1; i <= 8; i++) {
        int a;
        cin >> a;
        mp.insert({a, i});
    }

    auto iter = --mp.end();
    int arr[5];

    for (int i = 0; i < 5; i++) {
        sum += iter->first;
        arr[i] = iter->second;
        iter--;
    }

    sort(arr, arr + 5);

    cout << sum << '\n';

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}
