#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            if(i == 1 || j == 1 || i == a || j == a)
                cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
}