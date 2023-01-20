#include <iostream>

using namespace std;

int main() {
    int n, min = 1000001, max = -1000001;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        if (input > max)
            max = input;
        if (input < min)
            min = input;
    }
    cout << min << " " << max;
}
