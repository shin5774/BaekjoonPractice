#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    const int alp = 'a' - 'A';
    int alpNum[26] = {
        0,
    };
    int maxNum = 0;
    int csr = 0;
    bool same = false;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        int num = str.at(i);
        if ('a' <= num && num <= 'z') {
            num -= alp;
        }
        alpNum[num - 'A']++;
    }

    for (int j = 0; j < 26; j++) {
        if (maxNum == alpNum[j]) {
            same = true;
        } else if (maxNum < alpNum[j]) {
            maxNum = alpNum[j];
            csr = j;
            same = false;
        }
    }

    if (same) {
        cout << "?";
    } else {
        cout << (char)('A' + csr);
    }
}
