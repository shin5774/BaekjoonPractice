#include <iostream>

using namespace std;

int main() {
    int num, limit, input;
    cin >> num >> limit;
    for (int i = 0; i < num; i++) {
        cin >> input;
        if (limit > input)
            cout << input << " ";
    }
}
