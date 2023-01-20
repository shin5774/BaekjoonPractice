#include <iostream>
#define MAX_N 100

using namespace std;

int n;
int arr[MAX_N][MAX_N];
bool visited[MAX_N];

bool DFS(int idx, int target, int count) {
    if (idx == target && count != 0)
        return true;

    if (idx != target)
        visited[idx] = true;

    bool check = false;
    for (int i = 0; i < n; i++) {
        if (!visited[i] && arr[idx][i] == 1) {
            if (DFS(i, target, count + 1)) {
                check = true;
                break;
            }
        }
    }

    return check;
}

void reset() {
    for (int i = 0; i < n; i++) {
        visited[i] = false;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << DFS(i, j, 0) << " ";
            reset();
        }
        cout << '\n';
    }
}
