#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    int num = 0;
    getline(cin, a);
    if (a.front() == ' ') {
        a.erase(0, 1);
    }
    if (a.back() == ' ') {
        a.erase(a.size() - 1);
    }
    while (a.size() != 0;)
        cout << num;
}
