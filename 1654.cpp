#include <iostream>

using namespace std;

void quick_sort(int *data, int start, int end) {
    if (start >= end) {
        return;
    }

    int pivot = start;
    int i = pivot + 1;
    int j = end;
    int temp;

    while (i <= j) {
        while (i <= end && data[i] <= data[pivot]) {
            i++;
        }
        while (j > start && data[j] >= data[pivot]) {
            j--;
        }

        if (i > j) {
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        } else {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    quick_sort(data, start, j - 1);
    quick_sort(data, j + 1, end);
}
int find_n(int *data, int n, int range) {}
int main() {
    int k, n, key;
    int start = 0;
    int end;
    cin >> k >> n;
    int *lan = new int[k];

    // input
    for (int i = 0; i < k; i++) {
        cin >> lan[i];
    }

    quick_sort(lan, 0, k - 1);

    end = lan[k - 1];
    key = end;

    while (true) {
        int check = 0;
        int temp;
        for (int i = 0; i < k; i++) {
            check += lan[i] / key;
        }
        if (check < n) {
            end = key;
            key = (end - start) / 2 + start;
        } else {
            start = key;
            temp = (end - start) / 2 + start;
            if (key == temp)
                break;
            key = temp;
        }
    }

    cout << key;
}
