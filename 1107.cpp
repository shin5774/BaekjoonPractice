#include <cmath>
#include <iostream>

using namespace std;

int n;
bool error[10]; //������ ��ư Ȯ�� ,true: ���� ,false: ����

int find_len(int num) { // ���� ���� ���� ��ȯ (�Է¹���:0~999999)
    if (num >= 100000)
        return 6;
    else if (num >= 10000)
        return 5;
    else if (num >= 1000)
        return 4;
    else if (num >= 100)
        return 3;
    else if (num >= 10)
        return 2;
    else
        return 1;
}

bool find(int num,
          int len) { //�� �ڸ������� ���� �ش��ϴ� ��ư�� ���峵���� Ȯ��
    for (int j = 0; j < len; j++) {
        int check = num % 10;
        if (error[check]) {
            return false;
        }
        num /= 10;
    }

    return true;
}

int large_find() {

    for (int i = n; i < 1000000; i++) {
        int len = find_len(i);

        if (find(i, len))
            return i - n + len;
    }

    return 500001;
}

int small_find() {
    for (int i = n; i >= 0; i--) {
        int len = find_len(i);

        if (find(i, len))
            return n - i + len;
    }

    return 500001;
}

int main() {
    int m, ans, large, small;

    cin >> n >> m;

    while (m--) { //������ ��ư �Է¹� ����
        int a;
        cin >> a;
        error[a] = true;
    }

    ans = abs(n - 100); //���� ä�� 100���� +/- ��ư������ �̵���������� ��

    large = large_find(); // n �̻��� ���� ���峪�� ���� ��ư���� �̷���� ����
                          // n�� ����
    small = small_find(); // n ������ ���� ���峪�� ���� ��ư���� �̷���� ����
                          // n�� ���� n�� ����

    // 77~80 ������ ���� �ּҰ��� ans�� ����
    if (ans > large)
        ans = large;
    if (ans > small)
        ans = small;

    cout << ans;
}
