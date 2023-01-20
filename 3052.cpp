#include <iostream>

using namespace std;

int main() {
    int input;
    int remain[42] = {
        0,
    };
    int num = 0;
    for (int i = 0; i < 10; i++) {
        cin >> input;
        int index = input % 42;
        if (!remain[index]) {
            remain[index]++;
            num++;
        }
    }

    cout << num;
}
