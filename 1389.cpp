#include <iostream>
#include <queue>
#include <string.h> //memset�� ���� header ����

#define MAX_N 101

using namespace std;

int n, m;
bool arr[MAX_N][MAX_N]; //
bool visited[MAX_N];    //��� �湮 Ȯ�ο� �迭

int BFS(int a) {
    queue<int> q;
    int level = 0;
    int sum = 0; //�湮�� ������ level�� ��

    q.push(a);
    visited[a] = true;

    while (!q.empty()) {
        int sz = q.size();
        for (int i = 0; i < sz; i++) {
            int fr = q.front();
            q.pop();

            sum += level;

            for (int k = 1; k <= n; k++) {
                if (arr[fr][k] && !visited[k]) {
                    q.push(k);
                    visited[k] = true;
                }
            }
        }
        level++;
    }

    return sum;
}

int main() {
    int idx;         //�ּ� ���� ������ ���� �ѹ�
    int max = 20000; //�ش� ������ ��

    cin >> n >> m;

    while (m--) {
        int a, b;
        cin >> a >> b;
        arr[a][b] = true;
        arr[b][a] = true;
    }

    for (int i = 1; i <= n; i++) { // 1���� n������ �������� ����
        int sum = BFS(i);

        if (sum < max) {
            idx = i;
            max = sum;
        }

        memset(visited, false, (n + 1) * sizeof(bool));
    }

    cout << idx;
}
