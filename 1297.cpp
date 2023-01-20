#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int d, h, w;
    float t;
    cin >> d >> h >> w;

    t = pow(d, 2) / (pow(w, 2) + pow(h, 2));

    cout << (int)sqrt(t * h * h) << " " << (int)sqrt(t * w * w);
}
