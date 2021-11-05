#include <iostream>

using namespace std;

int main() {
    int num;
    int max = 0;
    double sum = 0;

    cout << fixed;
    cout.precision(2);
    cin >> num;
    double *sub = new double[num];
    for (int i = 0; i < num; i++) {
        cin >> sub[i];
        if (sub[i] > max)
            max = sub[i];
    }
    for (int i = 0; i < num; i++) {
        sub[i] = (sub[i] / max * 100);
        sum += sub[i];
    }
    cout << sum / num;
}
