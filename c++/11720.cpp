#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    int sum = 0;
    string input;
    cin >> num >> input;
    for (int i = 0; i < num; i++) {
        sum += (input.at(i) - '0');
    }
    cout << sum;
}
