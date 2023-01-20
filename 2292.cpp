#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int check = 1;
    int count = 1;
    while (true) {
        if (n <= check) {
            break;
        }
        check += (6 * count++);
    }
    cout << count;
}
