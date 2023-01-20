#include <cstring>
#include <iostream>
#include <queue>
#include <sstream>
#include <string>
using namespace std;

string Prt(deque<int> q, bool flag) {
    string ans;
    ans.append("[");
    /*
    cout << "[";
    if (flag) {
        for (int i = 0; i < q.size() - 1; i++) {
            cout << q.front() << ",";
            q.pop_front();
        }
        cout << q.front() << "]";
    } else {
        for (int i = 0; i < q.size() - 1; i++) {
            cout << q.back() << ",";
            q.pop_back();
        }
        cout << q.front() << "]" << '\n';
    }
    */

    if (flag) {
        while (!q.empty()) {
            ans.append(to_string(q.front()));
            ans.append(",");
            q.pop_front();
        }
        ans.pop_back();
        ans.append("]");
    } else {
        while (!q.empty()) {
            ans.append(to_string(q.back()));
            ans.append(",");
            q.pop_back();
        }
        ans.pop_back();
        ans.append("]");
    }

    return ans;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;

    cin >> t;

    while (t--) {
        deque<int> q;
        string p, input, n;
        int num;
        bool flag = true; //정방향:true, 역방향:false
        bool ans_flag = false;
        cin >> p >> num >> input;
        /*
                if (num > 1) {
                    input = input.substr(1, input.length() - 2);

                    istringstream ss(input);

                    while (getline(ss, n, ',')) {
                        q.push_back(stoi(n));
                    }
                } else if (num == 1) {
                    input = input.substr(1, input.length() - 2);
                    q.push_back(stoi(input));
                }
                */
        if (num >= 1) {
            input = input.substr(1, input.length() - 2);
            size_t pos = 0;
            while ((pos = input.find(",")) != string::npos) {
                int a = stoi(input);
                q.push_back(stoi(input));
                input.erase(0, pos + 1);
            }
            q.push_back(stoi(input));
        }

        for (int i = 0; i < p.length(); i++) {
            if (p[i] == 'R') {
                flag = !flag;
            } else {
                if (q.empty()) {
                    cout << "error" << '\n';
                    ans_flag = true;
                    break;
                }
                if (flag)
                    q.pop_front();
                else
                    q.pop_back();
            }
        }

        if (!ans_flag)
            cout << Prt(q, flag) << '\n';
    }
}
