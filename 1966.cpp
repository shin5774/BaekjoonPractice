#include <deque>
#include <iostream>
#include <tuple>

using namespace std;

int main() {
    int t;
    cin >> t; //반복횟수
              //하위
    for (int i = 0; i < t; i++) {
        int n, m; //파일의 갯수, 찾으려는 인덱스
        deque<pair<int, int>> q;
        int count = 1; //나오는 순서
        cin >> n >> m;

        for (int j = 0; j < n; j++) {
            int pr; //우선 순위
            cin >> pr;
            q.push_back(make_pair(pr, j));
        }

        while (!q.empty()) {
            int cpr, cnum;
            pair<int, int> p = q.front();
            tie(cpr, cnum) = p; //큐의 가장 앞에있는 파일의 우선순위와 인덱스

            bool check = true; //우선순위 비교 확인을 위한 bool형 변수
            for (auto iter = q.begin(); iter != q.end(); iter++) {
                if (iter->first >
                    cpr) { //우선순위가 큰것을 발견->문제의 2번 행동을 수행함
                    q.pop_front();
                    q.push_back(make_pair(cpr, cnum));
                    check = false;
                    break;
                }
            }

            if (check) { //가장 앞에 있는것이 우선순위가 제일 컸을 경우
                if (cnum == m) { //우리가 찾으려고 했던 인덱스인경우
                    cout << count << '\n';
                    break;
                } else {
                    q.pop_front(); //출력하고 POP시킴
                    count++;
                }
            }
        }
    }
}
