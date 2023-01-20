#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string input;
    int ans = 0;
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if (strncmp(&input[i], "c=", 2) == 0 ||
            strncmp(&input[i], "c-", 2) == 0 ||
            strncmp(&input[i], "d-", 2) == 0 ||
            strncmp(&input[i], "lj", 2) == 0 ||
            strncmp(&input[i], "nj", 2) == 0 ||
            strncmp(&input[i], "s=", 2) == 0 ||
            strncmp(&input[i], "z=", 2) == 0) {
            i++;
        } else if (strncmp(&input[i], "dz=", 3) == 0) {
            i += 2;
        }
        ans++;
    }

    cout << ans;
}
