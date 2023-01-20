#include <iostream>
#define MAX_N 101
using namespace std;

long long arr[101];

void initialize() {
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 2;
    arr[5] = 2;
    arr[6] = 3;
    arr[7] = 4;
    arr[8] = 5;
    arr[9] = 7;
    arr[10] = 9;
}

long long dp(int n){
    if(n==0){
        return 0;
    }
    if(arr[n]==0){
        arr[n] = dp(n - 1) + dp(n - 5);
    }
    return arr[n];
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    initialize();

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        cout << dp(n)<<'\n';
    }
}
