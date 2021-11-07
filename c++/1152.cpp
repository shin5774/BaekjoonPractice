#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    int num = 0;
    char blank = ' ';
    getline(cin, a);

    if (a.front() == blank) {
        a.erase(0, 1);
    }
    if (a.back() == blank) {
        a.erase(a.size() - 1);
    }
    if (a.size() == 0)
        cout << num;
    else {
        num++;
        for (int i = 0; i < a.size(); i++) {
            if (a.at(i) == blank)
                num++;
        }

        cout << num;
    }
}
