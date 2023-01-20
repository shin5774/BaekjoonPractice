#include <iostream>

using namespace std;

//�ִ����� :Euclid's Algorithm
int maximum(int n, int m) {
    if (m == 0) {
        return n;
    }
    return maximum(m, n % m);
}

//�ּ� �����
int minimum(int n, int m) { return (n * m) / maximum(n, m); }

int main() {
    int n, m;
    cin >> n >> m;
    if (n < m) {
        int temp = n;
        n = m;
        m = temp;
    }
    cout << maximum(n, m) << '\n' << minimum(n, m);
}
