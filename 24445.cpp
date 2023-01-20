#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
#include <string.h>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m, r, cnt = 1;
    queue<int> q;
    cin >> n >> m >> r;

    vector<int> *vertex = new vector<int>[n + 1];
    bool *visited = new bool[n + 1];
    int *ans = new int[n + 1];

    for (int i = 0;i<m;i++){
        int a, b;
        cin>>a>>b;
        vertex[a].push_back(b);
        vertex[b].push_back(a);
    }

    for (int i = 1; i <= n;i++){
        sort(vertex[i].begin(), vertex[i].end(), greater<>());
        ans[i] = 0;
    }

    q.push(r);
    visited[r] = true;

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        ans[cur] = cnt++;

        for(auto& next:vertex[cur]){
            if(!visited[next]){
                q.push(next);
                visited[next] = true;
            }
        }
    }

    for (int i = 1; i <= n;i++){
        cout << ans[i] << '\n';
    }
}
