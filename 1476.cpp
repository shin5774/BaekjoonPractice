#include <iostream>

using namespace std;

int main() {
    int e, s, m;
    int ie = 1;
    int is = 1;
    int im = 1;
    int t = 1;
    cin >> e >> s >> m;

    while (ie != e || is != s || im != m) {
        ie++;
        is++;
        im++;
        t++;
        if (ie > 15) {
            ie = 1;
        }
        if (is > 28) {
            is = 1;
        }
        if (im > 19) {
            im = 1;
        }
    }

    cout << t;
}
