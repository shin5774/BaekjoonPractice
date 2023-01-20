#include <algorithm> //sort�� ����ϱ� ���� header ����
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    int ans = 0;
    vector<pair<int, int>> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int s, e;
        cin >> s >> e;
        v.push_back(make_pair(e, s)); //���� �ð��� �������� �ϱ� ����
    }

    sort(v.begin(), v.end());

    int i = 0;

    while (i < n) {
        int end = v[i].first;
        ans++;
        i++; //���� Ȯ���� �����ϱ� ���� ����

        while (v[i].second < end && i < n) {
            i++;
        }
    }

    cout << ans;
}
