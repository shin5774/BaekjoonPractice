#include <deque>
#include <iostream>
#include <tuple>

using namespace std;

int main() {
    int t;
    cin >> t; //�ݺ�Ƚ��
              //����
    for (int i = 0; i < t; i++) {
        int n, m; //������ ����, ã������ �ε���
        deque<pair<int, int>> q;
        int count = 1; //������ ����
        cin >> n >> m;

        for (int j = 0; j < n; j++) {
            int pr; //�켱 ����
            cin >> pr;
            q.push_back(make_pair(pr, j));
        }

        while (!q.empty()) {
            int cpr, cnum;
            pair<int, int> p = q.front();
            tie(cpr, cnum) = p; //ť�� ���� �տ��ִ� ������ �켱������ �ε���

            bool check = true; //�켱���� �� Ȯ���� ���� bool�� ����
            for (auto iter = q.begin(); iter != q.end(); iter++) {
                if (iter->first >
                    cpr) { //�켱������ ū���� �߰�->������ 2�� �ൿ�� ������
                    q.pop_front();
                    q.push_back(make_pair(cpr, cnum));
                    check = false;
                    break;
                }
            }

            if (check) { //���� �տ� �ִ°��� �켱������ ���� ���� ���
                if (cnum == m) { //�츮�� ã������ �ߴ� �ε����ΰ��
                    cout << count << '\n';
                    break;
                } else {
                    q.pop_front(); //����ϰ� POP��Ŵ
                    count++;
                }
            }
        }
    }
}
