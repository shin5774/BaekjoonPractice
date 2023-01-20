#include <iostream>
#include <queue>
#define MAX_N 20
using namespace std;

int n, t, shx, shy;
int sz = 2;

int arr[MAX_N][MAX_N];
bool where[MAX_N][MAX_N];

bool find() {
    bool trig = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] < sz) {
                where[i][j] = true;
                trig = true;
            }
        }
    }

    return trig;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a = arr[i][j];
            cin >> arr[i][j];
            if (a == 9) {
                shx = i;
                shy = j;
            }
        }
    }

    while (true) {
        if (!find())
            break;
    }

    cout << t;
}
