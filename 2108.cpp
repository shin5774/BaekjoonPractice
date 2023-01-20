#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int n, out_rel, avg;
    double sum = 0;
    vector<int> v;
    map<int, int> m;
    priority_queue<pair<int, int>> pq;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        v.push_back(input);
        sum += v[i];
        m[input]++;
    }
    sum = round(sum / n);
    avg = sum;

    sort(v.begin(), v.end());

    for (auto a : m) {
        pq.push({a.second, -a.first});
    }

    out_rel = -pq.top().second;
    int cnt = pq.top().first;
    pq.pop();
    if (cnt == pq.top().first) {
        out_rel = -pq.top().second;
    }

    cout << avg << '\n'
         << v[n / 2] << '\n'
         << out_rel << '\n'
         << v[n - 1] - v[0];
}
