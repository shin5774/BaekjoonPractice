#include <iostream>
#include <queue>

using namespace std;

int ladder_snake[101]; //뱀과 사다리 저장
bool visited[101];
queue<int> q;

void Push(int n) {
    if (!visited[n]) {
        q.push(n);
        visited[n] = true;
    }
}

int BFS() {
    Push(1);
    int cnt = 0; //주사위 굴린 횟수

    while (!q.empty()) {
        int sz = q.size();
        for (int i = 0; i < sz; i++) {
            int a = q.front();
            q.pop();

            if (a == 100)
                return cnt;

            for (int j = 1; j <= 6; j++) {
                int idx = a + j;
                if (idx <= 100) {
                    if (ladder_snake[idx]) {
                        Push(ladder_snake[idx]);
                        visited[idx] = true;
                    } else {
                        Push(idx);
                    }
                }
            }
        }
        cnt++;
    }
}

int main() {
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n + m; i++) {
        int a, b;
        cin >> a >> b;

        ladder_snake[a] = b;
    }

    cout << BFS();
}
