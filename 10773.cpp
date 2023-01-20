#include <iostream>
#include <stack>

using namespace std;

int main() {
    int k;
    stack<int> st;

    cin >> k;

    while (k--) {
        int input;
        cin >> input;
        if (input == 0) {
            st.pop();
        } else {
            st.push(input);
        }
    }

    int sum = 0;
    while (!st.empty()) {
        sum += st.top();
        st.pop();
    }

    cout << sum;
}
