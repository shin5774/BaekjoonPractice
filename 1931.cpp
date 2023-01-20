#include <algorithm> //sort를 사용하기 위한 header 파일
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
        v.push_back(make_pair(e, s)); //종료 시간을 기준으로 하기 위함
    }

    sort(v.begin(), v.end());

    int i = 0;

    while (i < n) {
        int end = v[i].first;
        ans++;
        i++; //본인 확인을 제외하기 위해 넣음

        while (v[i].second < end && i < n) {
            i++;
        }
    }

    cout << ans;
}
