#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n, error = 0;
        string bracet;
        stack<char> store;
        cin >> n >> bracet;
        for(int i = 0; i < n; i++){
            if(bracet[i] == '(')
                store.push('(');
            else if(bracet[i] == ')' && store.size() != 0){
                store.pop();
            }
            else{
                error++;
            }
        }
        error += store.size();
        cout << error/2 << "\n";
    }
}