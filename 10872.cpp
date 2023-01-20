#include <iostream>

using namespace std;

int main() {
    long ans = 1;
    int n;

    cin >> n;
    while(n>1){
        ans*=n;
        n--;
    }

    cout << ans;
}
