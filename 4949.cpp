#include <iostream>
#include <stack>
#include <string>

using namespace std;

string line;

bool check() {
    stack<char> st;
    int i = 0;
    while (line[i] != '.') {
        switch (line[i]) {
        case '[':
            st.push(line[i]);
            break;
        case ']':
            if (st.empty() || st.top() != '[')
                return false;
            st.pop();
            break;
        case '(':
            st.push(line[i]);
            break;
        case ')':
            if (st.empty() || st.top() != '(')
                return false;
            st.pop();
            break;
        }
        i++;
    }

    if (!st.empty())
        return false;
    return true;
}
int main() {
    getline(cin, line);
    while (line[0] != '.') {
        if (check())
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
        getline(cin, line);
    }
}
