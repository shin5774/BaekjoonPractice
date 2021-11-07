#include <iostream>

using namespace std;

int main() {
    int hour, min;
    cin >> hour >> min;
    if(min<45){
        min += 15;
        if(hour==0){
            hour = 23;
        }
        else{
            hour--;
        }
    }
    else{
        min -= 45;
    }
    cout << hour << " " << min;
}
