#include <cmath>
#include <iostream>

using namespace std;

int n;
bool error[10]; //망가진 버튼 확인 ,true: 고장 ,false: 정상

int find_len(int num) { // 들어온 수의 길이 반환 (입력범위:0~999999)
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
          int len) { //각 자리마다의 수에 해당하는 버튼이 고장났는지 확인
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

    while (m--) { //망가진 버튼 입력및 저장
        int a;
        cin >> a;
        error[a] = true;
    }

    ans = abs(n - 100); //시작 채널 100에서 +/- 버튼만으로 이동했을경우의 수

    large = large_find(); // n 이상의 값중 고장나지 않은 버튼으로 이루어진 수중
                          // n과 가까운값
    small = small_find(); // n 이하의 값중 고장나지 않은 버튼으로 이루어진 수중
                          // n과 가까운값 n과 가까운값

    // 77~80 세개의 값중 최소값을 ans에 저장
    if (ans > large)
        ans = large;
    if (ans > small)
        ans = small;

    cout << ans;
}
