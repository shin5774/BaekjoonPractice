#include <iostream>

using namespace std;

void change(int &num) {
    int hund = num / 100;
    num %= 100;
    num += (num % 10) * 100;
    num = num / 10 * 10;
    num += hund;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    change(num1);
    change(num2);

    if (num1 > num2)
        cout << num1;
    else
        cout << num2;
}
