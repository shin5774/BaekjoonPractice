#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    long long int input;
    vector<char> ans;

    int set;
    char a;
    cin >> input >> set;

    while (input != 0) {
        int check = input % set;
        char conv;
        if (check > 9) {
            conv = check - 10 + 'A';
        } else
            conv = check + '0';
        ans.push_back(conv);
        input /= set;
    }

    while (!ans.empty()) {
        cout << ans.back();
        ans.pop_back();
    }
}
