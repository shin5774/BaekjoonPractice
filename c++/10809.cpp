#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string input;
    int alp[26];
    memset(alp, -1, sizeof(int) * 26);
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        int index = input.at(i) - 'a';
        if (alp[index] == -1) {
            alp[index] = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << alp[i] << " ";
    }
}
