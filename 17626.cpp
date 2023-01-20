#include <cmath> //sqrt를 사용하기 위한 header
#include <iostream>

#define MAX_N 50001

using namespace std;

int dp[MAX_N];
int ans = 5;

void initialize() { //제곱수 초기화
    int n = 1;
    while (n * n <= 50000) {
        dp[n * n] = 1;
        n++;
    }
}

int find(int n) {
    if (!dp[n]) {
        int min = 4;
        int s = sqrt(n); //가장 가까운 제곱을 확인하기 위함 ex)26=5.xxx->5

        for (int i = s; i > 0; i--) {       // brute force부분
            int search = find(n - (i * i)); //제곱을 뺀 나머지를 탐색

            if (search < min) { //그중 최소가 되는값을 저장
                min = search;
            }
        }

        dp[n] = min + 1; // dp[n-i*i]+(dp[i*i]=1)
    }
    return dp[n];
}

int main() {
    int n;

    cin >> n;

    initialize();

    cout << find(n);
}
