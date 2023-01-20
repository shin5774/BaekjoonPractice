#include <iostream>
#include <stack>
#include <string>

#define MAX_N 100000
using namespace std;

int *arr = new int[MAX_N + 1];
stack<int> st;
string ans;

void stack_push(int input) {
    st.push(input);
    ans.append("+\n");
}

void stack_pop() {
    st.pop();
    ans.append("-\n");
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int input_idx = 1; //입력된 값 확인용 index
    int stack_idx = 1; // 1부터 n까지 stack에 순서대로 들어갈 변수
    int seq = 0;// stack 연속 확인을 위한 변수

    while (input_idx <= n) {
        if (seq == 0) {
            stack_push(stack_idx);
        }
        if (!st.empty() && st.top() == arr[input_idx]) {
            stack_pop();
            input_idx++;
            seq = 1;
            continue;
        }

        else if (!st.empty() && st.top() > arr[input_idx]) {
            break;
        }

        stack_idx++;
        seq = 0;
    }

    if (input_idx <= n) {
        cout << "NO";
    } else {
        cout << ans;
    }
}
