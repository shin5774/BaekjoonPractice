#include <iostream>

using namespace std;

int main() {
    int x, y, width, height;
    int widMin, heiMin;
    cin >> x >> y >> width >> height;
    widMin = (x > width - x) ? width - x : x;
    heiMin = (y > height - y) ? height - y : y;
    if (widMin > heiMin) {
        cout << heiMin;
    } else {
        cout << widMin;
    }
}
