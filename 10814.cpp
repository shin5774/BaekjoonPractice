#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    priority_queue<tuple<int, int, string>> pq;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int age;
        string name;
        cin >> age >> name;
        pq.push({-age, -i, name});
    }

    while (!pq.empty()) {
        int age, i;
        string name;
        tie(age, i, name) = pq.top();
        cout << -age << " " << name << '\n';
        pq.pop();
    }
}
