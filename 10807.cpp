#include <iostream>

using namespace std;

int main(){
    int n,find;
    int ans = 0;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cin >> find;

    for (int i = 0; i < n;i++){
        if(arr[i]==find)
            ans++;
    }

    cout << ans;
}
