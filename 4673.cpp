#include <iostream>

#define MAX_N 10001

using namespace std;

bool arr[MAX_N];

int main() {

    for (int i = 1; i < MAX_N; i++) {
        int n = i;
        int sum = n;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }

        n = sum;
        arr[n] = true;
    }

    for (int i = 1; i < MAX_N; i++) {
        if (!arr[i])
            cout << i << '\n';
    }
}
