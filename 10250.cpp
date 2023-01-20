#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int h, w, n;
        cin >> h >> w >> n;
        int hhnum = n % h;
        int rrnum = n / h + 1;
        if (hhnum == 0) {
            hhnum = h;
            rrnum--;
        }

        string hnum = to_string(hhnum);
        string rnum;
        if (rrnum < 10) {
            rnum = "0";
        }
        rnum += to_string(rrnum);

        cout << hnum + rnum << '\n';
    }
}
