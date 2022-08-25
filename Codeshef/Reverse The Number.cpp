#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int x, flag = 0;
        cin >> x;
        while(x > 0){
            int y = x % 10;
            if(y > 0) flag = 1;
            if(flag == 1) cout << y;
            x = x / 10;
        }
        cout << endl;
    }
}
