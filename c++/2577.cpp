#include <iostream>

using namespace std;

int main() {
    int num, sum = 1;
    int line = 1;
    int arr[10] = {
        0,
    };
    for (int i = 0; i < 3; i++) {
        cin >> num;
        sum *= num;
    }
    while (sum / line) {
        arr[(sum % (10 * line) - (sum % line)) /
            line]++; //앞의 %는 구하려는 자리,뒤의 %는 그 앞자리의 숫자 그 둘을
                     //빼면 구하려는 자리만 있는 수를 구할수 있고 그것을 뒤의
                     //자리수를 버린다
        line *= 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
}
