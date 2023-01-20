#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int n;
    priority_queue<pair<long, int>> pq;

    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        long a;
        cin >> a;
        pq.push({-a, i});
    }

    int cnt = 0;

    while (!pq.empty()) {
        vector<int> idx;
        int check = pq.top().first;
        idx.push_back(pq.top().second);
        pq.pop();

        while (!pq.empty()&&pq.top().first == check) {
            idx.push_back(pq.top().second);
            pq.pop();
        }

        for (auto iter = idx.begin(); iter != idx.end(); iter++) {
            arr[*iter] = cnt;
        }
        cnt ++;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
