#include <iostream>

using namespace std;

int main() {
    int a, b;
    while (true) {
        cin >> a >> b;
        if (cin.eof())//eof 초기상태는 false->eof입력받을시 true로 바뀜
            break;
        cout << a + b << '\n';
    }
}
