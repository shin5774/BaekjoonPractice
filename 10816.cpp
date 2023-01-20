#include <iostream>

#define MAX_M 500'000
#define MAX_NUM 10'000'000
using namespace std;

int n, m;
int *arr = new int[MAX_M];
int *pnum = new int[MAX_NUM + 2]; // 0~10,000,000
int *mnum = new int[MAX_NUM + 1]; //-10,000,000~-1

int main() {
    cin >> n;
    while (n--) {
        long long input;
        cin >> input;

        if (input >= 0)
            pnum[input]++;
        else
            mnum[-input]++;
    }

    cin >> m;

    for (int i = 0; i < m; i++) {
        long long check;
        cin >> check;
        if (check >= 0)
            arr[i] = pnum[check];
        else
            arr[i] = mnum[-check];
    }

    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
}
