#include <deque>
#include <iostream>

using namespace std;

int main() {
    int n;
    deque<int> dq;
    cin >> n;

    for (int i = 1; i <= n; i++)
        dq.push_back(i);

    while (dq.size() != 1) {
        cout << dq.front() << " ";
        dq.pop_front();

        int a = dq.front();
        dq.pop_front();
        dq.push_back(a);
    }

    cout << dq.front();
}
