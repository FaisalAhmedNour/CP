#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i = 1; i <= T; ++i){
        int x, sum = 0;
        cin >> x;
        while(x > 0){
            int y = x % 10;
            sum += y;
            x = x / 10;
        }
        cout << sum << endl;
    }
}
