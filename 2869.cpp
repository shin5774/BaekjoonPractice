#include <iostream>

using namespace std;

int main() {
    long a, b, v;
    cin >> a >> b >> v;

    long inc = a - b;

    long t = (v - a) / inc;
    if ((v - a) % inc > 0) {
        t++;
    }
    cout << t + 1;
}
