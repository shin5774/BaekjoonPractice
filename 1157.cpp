#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    const int alp = 'a' - 'A';
    char alpNum[26] = {
        0,
    };
    int check = 0;
    int csr = 0;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        int num = str.at(i);
        if ('a' <= num && num <= 'z') {
            num -= alp;
        }
        alpNum[num - 'A']++;
    }

    for (int j = 1; j < 26; j++) {
        if (alpNum[j] > alpNum[csr]) {
            check = j;
            alpNum[csr] = alpNum[j];
            alpNum[j] = 0;
        }
    }
}
