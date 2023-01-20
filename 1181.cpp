#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

struct cmp {
    bool operator()(pair<int, string> a, pair<int, string> b) {
        if (a.first > b.first) {
            return true;
        } else if (a.first < b.first) {
            return false;
        } else
            return a.second > b.second;
    }
};
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    priority_queue<pair<int, string>, vector<pair<int, string>>, cmp> pq;
    priority_queue<string> ppq;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        pq.push({input.length(), input});
    }

    string pre = pq.top().second;
    cout << pre << '\n';
    pq.pop();
    while (!pq.empty()) {
        if (pre != pq.top().second) {
            pre = pq.top().second;
            cout << pre << '\n';

        }
        pq.pop();
    }
}
