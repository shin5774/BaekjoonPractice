#include <iostream>

using namespace std;
int m, n, k;
int **a, **b;

int cal(int i, int j) {
    int sum = 0;
    for (int idx = 0; idx < m; idx++) {
        sum += a[i][idx] * b[idx][j];
    }
    return sum;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n >> m;

    a = new int *[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cin >> m >> k;

    b = new int *[m];
    for (int i = 0; i < m; i++) {
        b[i] = new int[k];
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << cal(i, j) << " ";
        }
        cout << '\n';
    }
}
