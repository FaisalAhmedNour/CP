#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int f1 = 0, f2 = 1;
    if(n == 1)
        cout << f1;
    else if(n == 2)
        cout << f2;
    else{
        for(int i = 3; i <= n; i++){
            long long int f = f1 + f2;
            if(i == n){
                cout << f;
                break;
            }
            f1 = f2;
            f2 = f;
        }
    }
}