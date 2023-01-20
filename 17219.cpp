#include <iostream>
#include <map>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n,m;
    map<string, string> mp;

    cin >> n >> m;

    while(n--){
        string adr;
        string pwd;

        cin >> adr >> pwd;
        mp.insert({adr, pwd});
    }

    while(m--){
        string input;
        cin >> input;
        cout << mp[input] << '\n';
    }
}
