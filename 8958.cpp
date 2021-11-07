#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    int *ans = new int[num];
    for (int i = 0; i < num; i++) {
        string problem;
        int point = 0;
        int cont = 0;
        cin >> problem;
        for (int j = 0; j < problem.length(); j++) {
            if (problem.at(j) == 'O') {
                point = point + 1 + cont;
                cont++;
            } else {
                cont = 0;
            }
        }
        ans[i] = point;
    }

    for (int i = 0; i < num; i++) {
        cout << ans[i] << '\n';
    }
}
