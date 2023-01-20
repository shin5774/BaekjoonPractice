#include <iostream>
#define MAX_N 2187
using namespace std;

int arr[MAX_N][MAX_N];
int m, z, p;

void dc(int x,int y,int n){
    int checker=arr[y][x];
    bool divide = false;

    for (int i = y; !divide && i < y + n;i++){
        for (int j = x; j < x + n;j++){
            if(arr[i][j]!=checker){
                divide = true;
                break;
            }
        }
    }

    if(divide){
        int nn = n / 3;
        for (int i = 0; i < 3;i++){
            for (int j = 0; j < 3;j++){
                dc(x + nn * j, y + nn * i, nn);
            }
        }
        return;
    }

    if(checker==1){
        p++;
    }
    else if (checker==0){
        z++;
    }
    else{
        m++;
    }
}

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }

    dc(0, 0, n);

    cout << m << '\n' << z << '\n' << p;
}
