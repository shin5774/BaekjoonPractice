#include <iostream>
#include <queue>
#include <string.h> //memset을 위한 header 파일

#define MAX_N 101

using namespace std;

int n, m;
bool arr[MAX_N][MAX_N]; //
bool visited[MAX_N];    //노드 방문 확인용 배열

int BFS(int a) {
    queue<int> q;
    int level = 0;
    int sum = 0; //방문한 노드들의 level의 합

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
    int idx;         //최소 값을 가지는 유저 넘버
    int max = 20000; //해당 유저의 수

    cin >> n >> m;

    while (m--) {
        int a, b;
        cin >> a >> b;
        arr[a][b] = true;
        arr[b][a] = true;
    }

    for (int i = 1; i <= n; i++) { // 1부터 n까지의 시작지점 설정
        int sum = BFS(i);

        if (sum < max) {
            idx = i;
            max = sum;
        }

        memset(visited, false, (n + 1) * sizeof(bool));
    }

    cout << idx;
}
