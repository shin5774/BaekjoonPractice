#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int *height = new int[n];
    int *weight = new int[n];
    int *ans = new int[n];

    for (int i = 0; i < n; i++) {
        int h, w;
        cin >> w >> h;
        height[i] = h;
        weight[i] = w;
        ans[i] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==j){
                continue;
            }
            if (weight[j] > weight[i] && height[j] > height[i]) {
                ans[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}
