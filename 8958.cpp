#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        string input;
        int ans = 0, point = 1;
        cin >> input;

        for (int i = 0; i < input.length();i++){
            if(input[i]=='O'){
                ans += point;
                point++;
            }
            else{
                point = 1;
            }
        }
        cout << ans << '\n';
    }
}
