#include <iostream>

using namespace std;

int a, b;
int fib(int n) {
    if (n == 1 || n == 2){
        a++;
        return 1;
    }
    else return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n) {
    int *f = new int[n+1];
    f[1] = 1, f[2] = 1;

    for (int i = 3; i <= n;i++){
        b++;
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n];
}

int main(){
    int n;
    cin>>n;
    fib(n);
    fibonacci(n);
    cout << a << " " << b;
}
