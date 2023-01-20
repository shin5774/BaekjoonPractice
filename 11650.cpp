#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    priority_queue<pair<int, int>> pq;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        pq.push({-x, -y});
    }

    while (!pq.empty()) {
        cout << -pq.top().first << " " << -pq.top().second << '\n';
        pq.pop();
    }
}
