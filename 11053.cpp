#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> *pos = new vector<int>[1001];
    vector<int> input;
    vector<int> sorted;
    int *dp = new int[n];

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        input.push_back(a);
        sorted.push_back(a);
        pos[a].push_back(i);
        dp[i] = 0;
    }

    sort(sorted.begin(), sorted.end());
    sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());

    for (int i = sorted.size() - 1; i >= 0; i--) {
        int index = sorted[i];
        int size = pos[index].size() - 1;
        bool *visited = new bool[n];
        for (int j = size; j >= 0; j--) {
            int findpos = pos[index][j];
            int max_len = 0;
            for (int k = findpos + 1; k < n; k++) {
                if (max_len < dp[k] && !visited[k]) {
                    max_len = dp[k];
                }
            }
            dp[findpos] = max_len + 1;
            visited[findpos] = true;
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (ans < dp[i]) {
            ans = dp[i];
        }
    }

    cout << ans;
}
