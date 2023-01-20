#include <iostream>

using namespace std;

bool arr[42];

int main() {
    int ans = 0;

    for (int i = 0; i < 10;i++){
        int input;
        cin>>input;
        arr[input % 42] = true;
    }

    for (int i = 0; i < 42;i++){
        if(arr[i])
            ans++;
    }

    cout << ans;
}
