#include <cmath> //sqrt�� ����ϱ� ���� header
#include <iostream>

#define MAX_N 50001

using namespace std;

int dp[MAX_N];
int ans = 5;

void initialize() { //������ �ʱ�ȭ
    int n = 1;
    while (n * n <= 50000) {
        dp[n * n] = 1;
        n++;
    }
}

int find(int n) {
    if (!dp[n]) {
        int min = 4;
        int s = sqrt(n); //���� ����� ������ Ȯ���ϱ� ���� ex)26=5.xxx->5

        for (int i = s; i > 0; i--) {       // brute force�κ�
            int search = find(n - (i * i)); //������ �� �������� Ž��

            if (search < min) { //���� �ּҰ� �Ǵ°��� ����
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
