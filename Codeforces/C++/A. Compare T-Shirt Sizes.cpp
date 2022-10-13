#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        int a = s1.size(), b = s2.size();
        if(s1[a-1] == s2[b-1]){
            if(a == b){
                cout << "=\n";
            }
            else if(s1[a-1] == 'S'){
                cout << (a > b ? "<\n" : ">\n");
            }
            else if(s1[a-1] == 'L'){
                cout << (a > b ? ">\n" : "<\n");
            }
        }
        else{
            if(s1[a-1] > s2[b-1])
                cout << "<\n";
            else if(s1[a-1] < s2[b-1])
                cout << ">\n";
        }
    }
}