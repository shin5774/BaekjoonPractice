#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int main() {
    int n;
    priority_queue<tuple<int, int, int, string>> pq;

    cin >> n;
    while (n--) {
        string name;
        int y, m, d;

        cin >> name >> d >> m >> y;

        pq.push(make_tuple(y, m, d, name));
    }

    cout << get<3>(pq.top()) << '\n';

    while (pq.size() != 1) {
        pq.pop();
    }

    cout << get<3>(pq.top()) << '\n';
}
