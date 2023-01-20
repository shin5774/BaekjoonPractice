#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    string input;
    deque<int> out;
    bool check = false;
    cin >> input;

    if (input.length() % 3 != 0) {
        check = true;
    } /// 765 432 10
    for (int i = input.length() - 1; i >= 0; i -= 3) {
        int k = 0;
        int o = 1;
        for (int j = 0; j < 3; j++) {
            if (input[i - j] == '1') {
                k += o;
            }
            o *= 2;
        }
        out.push_front(k);
    }
    /*
        if (check) {
            int k = 0;
            int o = 1;
            for (int i = (input.length() % 3) - 1; i >= 0; i--) {
                if (input[i] == '1') {
                    k += o;
                }
                o *= 2;
            }
            out.push(k);
        }
        */

    while (!out.empty()) {
        cout << out.front();
        out.pop_front();
    }
}
