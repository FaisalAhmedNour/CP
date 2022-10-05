#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0, line = 0, box = 1;
    cin >> n;
    while(sum+box <= n){
        sum += box;
        line++;
        box += line+1;
    }
    cout << line;
}