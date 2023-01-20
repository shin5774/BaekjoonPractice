#include <iostream>

using namespace std;

int main() {
    int h, m, ad;

    cin >> h >> m >> ad;

    m += ad;

    h += (m / 60);

    m = m % 60;

    if (h > 23) {
        h -= 24;
    }

    cout << h << " " << m;
}
