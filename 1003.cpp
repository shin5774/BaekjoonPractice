#include <iostream>

using namespace std;

int zero[41];
int one[41];

void initialize() {
    for (int i = 0; i <= 41;i++){
        zero[i] = -1;
        one[i] = -1;
    }
    zero[0] = 1;
    zero[1] = 0;
    one[0] = 0;
    one[1] = 1;

}

int zero_dp(int idx){
    if(zero[idx]!=-1){
        return zero[idx];
    }
    else if(idx==0){
        return 1;
    }
    else{
        zero[idx] = zero_dp(idx - 1) + zero_dp(idx - 2);
        return zero[idx];
    }
}

int one_dp(int idx) {
    if (one[idx] != -1) {
        return one[idx];
    }
    else if (idx==1){
        return 1;
    }
    else {
        one[idx] = one_dp(idx - 1) + one_dp(idx - 2);
        return one[idx];
    }
}

int main() {
    int t;
    cin>>t;

    initialize();
    while(t--){

        int input;
        cin >> input;

        cout << zero_dp(input) << " " << one_dp(input) << '\n';
    }
}
