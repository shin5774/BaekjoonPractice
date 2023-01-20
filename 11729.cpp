#include <iostream>
#include <vector>

using namespace std;

int ans;
vector<pair<int,int>> mv;

void hanoi(int start,int end,int n){
    if(n==1){
        mv.push_back({start, end});
        ans++;
        return;
    }

    int empty = 6 - start - end;

    hanoi(start, empty, n - 1);
    mv.push_back({start, end});
    ans++;
    hanoi(empty, end, n - 1);
}

int main(){
    int n;
    cin>>n;

    hanoi(1, 3, n);
    cout << ans << '\n';

    for (int i = 0; i < mv.size();i++){
        cout << mv[i].first << " " << mv[i].second << '\n';
    }
}
