#include <iostream>
#define MAX_N 1000

using namespace std;

bool num[MAX_N + 1]; // prime = true

void prime() {

    // initialize
    num[2] = true;
    for (int i = 3; i <= MAX_N; i += 2) {
        num[i] = true;
    }

    // set prime
    for (int i = 3; i <= MAX_N; i += 2) {
        if (num[i]) {
            for (int j = i * i; j <= MAX_N; j += i) {
                num[j] = false;
            }
        }
    }
}

int main() {
    int n;
    int *input = new int[n];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    prime();

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (num[input[i]]) {
            count++;
        }
    }

    cout << count;
}
