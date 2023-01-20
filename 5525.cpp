#include <iostream>
#include <string>

using namespace std;

long long cnt, n, m;
string str, p;

int cor;

void make() {
    for (long long i = 0; i < 2 * n + 1; i++) {
        if (i % 2 == 0) {
            p.push_back('I');
        } else {
            p.push_back('O');
        }
    }
}

bool check(long long start) {
    string sstr = str.substr(start, 2 * n + 1);
    long long where = 0;
    cor = 0;
    for (int i = 1; i < 2 * n + 1; i++) {
        if (sstr.at(i) != p.at(i)) {
            where = i;
            break;
        }
    }

    if (where == 1) {
        cor = 1;
        return false;
    } else if (where == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cin >> n >> m >> str;
    make();
    for (long long i = 0; i <= m - 2 * n - 1; i++) {
        if (str.at(i) == 'I') {
            if (check(i)) {
                cnt++;
                i++;
            } else if (cor == 0) {
                i++;
            }
        }
    }

    cout << cnt;
}
