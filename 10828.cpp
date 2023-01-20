#include <iostream>
#include <map>
#include <stack>

using namespace std;

map<string, int> m;

void initialize() {
    m["push"] = 0;
    m["pop"] = 1;
    m["size"] = 2;
    m["empty"] = 3;
    m["top"] = 4;
}

int main() {
    int n;
    stack<int> st;

    cin >> n;

    initialize();

    while (n--) {
        string input;
        cin >> input;

        switch (m[input]) {
        case 0:
            int x;
            cin >> x;
            st.push(x);
            break;
        case 1:
            if (st.empty())
                cout << -1 << '\n';
            else {
                cout << st.top() << '\n';
                st.pop();
            }
            break;
        case 2:
            cout << st.size() << '\n';
            break;
        case 3:
            if (st.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
            break;
        case 4:
            if (st.empty())
                cout << -1 << '\n';
            else
                cout << st.top() << '\n';
            break;
        }
    }
}
