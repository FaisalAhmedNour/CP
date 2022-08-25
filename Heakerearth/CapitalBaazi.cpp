
#include<bits/stdc++.h>
using namespace std;

int main(){
    string m;
    getline(cin, m);
    int n = m.size();
    for(int i = 0; i < n; ++i){
        if(m[i] == ' '){
            cout << endl;
        }
        else{
            putchar(toupper(m[i]));
        }
    }
}
