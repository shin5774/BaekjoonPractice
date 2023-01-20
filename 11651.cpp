#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    priority_queue<tuple<int, int>> pq;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        pq.push({-y, -x});
    }

    while (!pq.empty()) {
        int ax, ay;
        tie(ay, ax) = pq.top();
        cout << -ax << " " << -ay << '\n';
        pq.pop();
    }
}
