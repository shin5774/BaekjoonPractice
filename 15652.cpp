#include <iostream>
#include <vector>

using namespace std;

int n,m;

void bt(int idx,int cnt,vector<int> ans){
    ans.push_back(idx);
    cnt++;

    if(cnt==m){
        for (int i = 0; i < m;i++){
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n;i++){
        if(ans[cnt-1]<=i){
            bt(i, cnt, ans);
        }
    }
}

int main(){
    cin>>n>>m;

    for (int i = 1; i <= n;i++){
        vector<int> ans;
        bt(i, 0, ans);
    }
}
