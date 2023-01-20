#include <iostream>
#define MAX_N 100

using namespace std;

int n;
char arr[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];

bool condition(int x, int y) {
    if (x < 0 || x >= n || y < 0 || y >= n || visited[x][y])
        return false;
    return true;
}

void find(int x, int y) {
    visited[x][y] = true;

    int px[4] = {-1, 1, 0, 0};
    int py[4] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        int nx = x + px[i];
        int ny = y + py[i];
        if (condition(nx, ny) && arr[nx][ny] == arr[x][y])
            find(nx, ny);
    }
}

int check() {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                find(i, j);
                count++;
            }
        }
    }
    return count;
}

void reset() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            visited[i][j] = false;
            if (arr[i][j] == 'G')
                arr[i][j] = 'R';
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        for (int j = 0; j < n; j++) {
            arr[i][j] = input[j];
        }
    }

    cout << check() << " ";
    reset();
    cout << check();
}
