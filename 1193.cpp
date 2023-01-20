#include <iostream>

using namespace std;

int main() {
    int x;
    int sum = 0;
    int parent = 1;
    int child = 1;
    bool path = false;

    cin >> x;

    while (true) {
        if (sum + parent >= x)
            break;
        sum += parent;
        parent++;
        path = !path;
    }

    x -= sum;

    if (!path) {
        child = parent;
        parent = 1;
    }

    for (int i = 1; i < x; i++) {
        if (path) {
            child++;
            parent--;
        } else {
            child--;
            parent++;
        }
    }

    cout << child << "/" << parent;
}
