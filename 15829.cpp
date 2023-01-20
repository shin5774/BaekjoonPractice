#include <iostream>
using namespace std;

int main() {

    int l;
    char *input = new char[l];
    unsigned long long m = 1234567891;
    cin >> l >> input;
    unsigned long long sum = 0;
    for (int i = 0; i < l; i++) {
        int plus = input[i] - 'a' + 1;
        unsigned long long a = 1;
        for (int j = 0; j < i; j++) {
            a = a * 31 % m;
        }
        a = a * plus % m;
        sum = (sum + a) % m;
    }

    cout << sum;

}
