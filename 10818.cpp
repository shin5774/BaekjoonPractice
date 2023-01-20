#include <iostream>

using namespace std;

int main() {
    int num, input;
    int max = -1000000;
    int min = 1000000;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> input;
        if (max < input) {
            max = input;
        }
        if (min > input) {
            min = input;
        }
    }
    cout << min << " " << max;
}
