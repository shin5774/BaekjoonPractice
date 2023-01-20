#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    int sum = 0;
    cin>>n;

    for (int i = 0; i < 5;i++){
        int a = n % 10;
        sum += pow(a, 5);
        n /= 10;
    }

    cout << sum;
}
