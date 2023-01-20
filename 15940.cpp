#include <iostream>
#include <string>
using namespace std;

int main() {
    string ip;
    int cnt = 0;
    bool ans = false;

    getline(cin, ip);

    for (int i = 0; i < ip.length(); i++) {
        if (cnt == 0 && ip[i] == 'U') {
            cnt++;
        } else if (cnt == 1 && ip[i] == 'C') {
            cnt++;
        } else if (cnt == 2 && ip[i] == 'P') {
            cnt++;
        } else if (cnt == 3 && ip[i] == 'C') {
            ans = true;
            break;
        }
    }

    if (ans) {
        cout << "I love UCPC";
    } else {
        cout << "I hate UCPC";
    }
}
