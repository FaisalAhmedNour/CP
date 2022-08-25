
#include<bits/stdc++.h>
using namespace std;

char upper(char c){
    return ('A' + (c - 'a'));
}

char lower(char c){
    return ('a' + (c - 'A'));
}

int main(){
    string ch;
    cin >> ch;
    int sum = 0;
    for(int i = 0; i < ch.size(); ++i){
        if(ch[i] >= 'a' && ch[i] <= 'z'){
            char c = upper(ch[i]);
            sum += (int)c;
        }
        if(ch[i] >= 'A' && ch[i] <= 'Z'){
            char c = lower(ch[i]);
            sum -= (int)c;
        }
    }

    if(sum < 0) sum *= -1;

    int f = 1;
    for(int i = 2; i < sum; i++){
        if(sum % i == 0){
            f = 0;
            break;
        }
    }
    cout << (f == 1 ? "1" : "0");
}
