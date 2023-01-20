#include <iostream>
#define MAX_N 1000001
using namespace std;

bool visited[MAX_N];

int dp(int idx,int* arr){
    if(!visited[idx]){
        arr[idx] = dp(idx - 1,arr) + dp(idx - 2,arr);
        arr[idx] %= 15746;
        visited[idx]=true;
    }
    return arr[idx];
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int *arr = new int[n];
    arr[0] = 0;
    arr[1] = 1;

    visited[0] = true;
    visited[1] = true;
    if(n>1){
        arr[2] = 2;
        visited[2] = true;
    }

    cout << dp(n, arr);
}
