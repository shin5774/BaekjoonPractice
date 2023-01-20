#include <iostream>

using namespace std;
int n, k, ans, cnt;
int *arr;

void merge(int p, int q, int r) {
    int tmp_len = r - p + 1;
    int *tmp = new int[tmp_len];

    int i = p, j = q + 1, t = 0;

    while (i <= q && j <= r) {
        if (arr[i] <= arr[j]) {
            tmp[t++] = arr[i++];
        } else {
            tmp[t++] = arr[j++];
        }
    }
    while (i <= q) {
        tmp[t++] = arr[i++];
    }
    while (j <= r) {
        tmp[t++] = arr[j++];
    }
    i = p, t = 0;
    while (i <= r) {
        arr[i++] = tmp[t++];
        cnt++;
        if (cnt == k) {
            ans = tmp[t - 1];
        }
    }
}

void merge_sort(int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(p, q);
        merge_sort(q + 1, r);
        merge(p, q, r);
    }
}
int main() {
    cin >> n >> k;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    merge_sort(0, n - 1);

    if (ans == 0) {
        cout << -1;
    } else
        cout << ans;
}
