#include <iostream>
#include <map>
#include <queue>

using namespace std;
static map<string, int> m;

void init() {
    m["push"] = 0;
    m["pop"] = 1;
    m["size"] = 2;
    m["empty"] = 3;
    m["front"] = 4;
    m["back"] = 5;
}
int main() {
    int n;
    string input;
    queue<int> q;

    cin >> n;
    init();
    while (n--) {
        cin >> input;
        switch (m[input]) {
        case 0:
            int x;
            cin >> x;
            q.push(x);
            break;
        case 1:
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.front() << '\n';
                q.pop();
            }
            break;
        case 2:
            cout << q.size() << '\n';
            break;
        case 3:
            if (q.empty()) {
                cout << 1 << '\n';
            } else
                cout << 0 << '\n';
            break;
        case 4:
            if (q.empty())
                cout << -1 << '\n';
            else
                cout << q.front() << '\n';
            break;
        case 5:
            if (q.empty())
                cout << -1 << '\n';
            else
                cout << q.back() << '\n';
            break;
        }
    }
}
