#include <deque>
#include <iostream>
#include <map>

using namespace std;

static map<string, int> m;
deque<int> dq;

void init() {
    m["push_front"] = 0;
    m["push_back"] = 1;
    m["pop_front"] = 2;
    m["pop_back"] = 3;
    m["size"] = 4;
    m["empty"] = 5;
    m["front"] = 6;
    m["back"] = 7;
}

int main() {
    int n;
    cin >> n;
    init();
    while (n--) {
        string command;
        int x;
        cin >> command;

        switch (m[command]) {
        case 0:
            cin >> x;
            dq.push_front(x);
            break;
        case 1:
            cin >> x;
            dq.push_back(x);
            break;
        case 2:
            if (dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
            break;
        case 3:
            if (dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            break;
        case 4:
            cout << dq.size() << '\n';
            break;
        case 5:
            if (dq.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
            break;
        case 6:
            if (dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.front() << '\n';
            }
            break;
        case 7:
            if (dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.back() << '\n';
            break;
        }
    }
}
