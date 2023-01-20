#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    priority_queue<int> pq;

    while (n--) {
        int x;
        cin >> x;
        if (x == 0) {
            if (pq.empty())
                cout << 0;
            else {
                cout << -pq.top();
                pq.pop();
            }
            cout << '\n';
        } else {
            pq.push(-x);
        }
    }
}
