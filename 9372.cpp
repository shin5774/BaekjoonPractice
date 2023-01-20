#include <iostream>
#include <vector>

using namespace std;

int findRoot(vector<int> &parent, int a) {
    if (parent[a] == a)
        return a;
    parent[a] = findRoot(parent, parent[a]);

    return parent[a];
}

bool find(vector<int> &parent, int a, int b) {
    int ra = findRoot(parent, a);
    int rb = findRoot(parent, b);

    return ra == rb;
}

void merge(vector<int> &parent, int a, int b) {
    int ra = findRoot(parent, a);
    int rb = findRoot(parent, b);
    if (ra < rb)
        parent[rb] = ra;
    else
        parent[ra] = rb;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;

    while (t--) {
        int n, m, ans = 0;
        cin >> n >> m;

        vector<int> parent(n);
        vector<vector<int>> vertex;

        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }

        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            vector<int> input;
            input[0] = a;
            input[1] = b;
            vertex[i] = input;
        }

        for (int i = 0; i < m; i++) {
            if (!find(parent, vertex[i][0], vertex[i][1])) {
                merge(parent, vertex[i][0], vertex[i][1]);
                ans++;
            }
        }

        cout << ans << '\n';
    }
}
