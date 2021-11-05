#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        int j = 0;
        for (; j < num - i - 1; j++) {
            cout << " ";
        }
        for (; j < num; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
