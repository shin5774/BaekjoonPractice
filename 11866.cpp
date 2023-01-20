#include <iostream>
#include <list>
using namespace std;

int main() {
    int n, k;
    list<int> l;
    list<int>::iterator iter;
    cin >> n >> k;

    cout << "<";

    for (int i = 1; i <= n; i++) {
        l.push_back(i);
    }
    iter = l.begin();

    while (true) {
        for (int i = 0; i < k - 1; i++) {
            if (iter == l.end()) {
                iter = l.begin();
            }
            iter++;
        }
        if (iter == l.end()) {
            iter = l.begin();
        }
        cout << *iter;
        iter = l.erase(iter);

        if (l.empty()) {
            break;
        } else {
            cout << ", ";
        }
    }
    cout << ">";
}
