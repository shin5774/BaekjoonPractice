#include <cmath>
#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    priority_queue<pair<int, int>> pq;
    cin >> n;
    while (n--) {
        int input;
        cin >> input;
        if (input == 0) {
            if (pq.empty()) {
                cout << 0 << '\n';
            } else {
                int ans = -pq.top().second;
                pq.pop();
                cout << ans << '\n';
            }
        } else {
            pq.push(make_pair(-abs(input), -input));
        }
    }
}
