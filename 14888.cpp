#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    long max_ans = -1000000001;
    long min_ans = 1000000001;
    cin >> n;

    int *arr = new int[n];
    vector<int> op;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < 4; i++) {
        int a;
        cin >> a;
        for (int j = 0; j < a; j++) {
            op.push_back(i);
        }
    }

    do {
        long result = arr[0];

        for (int i = 0; i < op.size(); i++) {
            switch (op[i]) {
            case 0:
                result += arr[i + 1];
                break;
            case 1:
                result -= arr[i + 1];
                break;
            case 2:
                result *= arr[i + 1];
                break;
            case 3:
                result /= arr[i + 1];
                break;
            }
        }

        if (max_ans < result)
            max_ans = result;
        if (min_ans > result)
            min_ans = result;
    } while (next_permutation(op.begin(), op.end()));

    cout << max_ans << '\n' << min_ans;
}
