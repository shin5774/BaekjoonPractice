#include <iostream>

using namespace std;

bool arr[101][101];
int ans;

void charge(int x, int y) {
    for (int i = x; i < x + 10;i++){
        for (int j = y; j < y + 10;j++){
            if(!arr[i][j]){
                ans++;
                arr[i][j] = true;
            }
        }
    }
}

int main(void) {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        charge(x, y);
    }

    cout << ans;
}
