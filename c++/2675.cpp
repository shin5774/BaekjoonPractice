#include <iostream>
#include <string>

using namespace std;

int main() {
    int play;
    cin >> play;
    string *ans = new string[play];
    for (int j = 0; j < play; j++) {
        int plus;
        int oWordLen;
        string word;
        cin >> plus >> word;
        oWordLen = word.length();
        for (int i = 0; i < oWordLen; i++) {
            word.insert(i * plus, plus - 1, word.at(i * plus));
        }
        ans[j] = word;
    }
    for (int i = 0; i < play; i++) {
        cout << ans[i] << endl;
    }
}
