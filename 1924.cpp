#include <iostream>

using namespace std;

int main() {
    int x, y;
    int ans = 0;
    string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    cin >> x >> y;

    for (int i = 1; i < x; i++) {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 ||
            i == 12)
            ans += 31;
        else if (i == 2)
            ans += 28;
        else
            ans += 30;
    }

    ans += y;

    cout << day[ans % 7];
}
