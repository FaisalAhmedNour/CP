#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        double n, m, nt, mt;
        cin >> n >> m >> nt >> mt;
        if((n/nt) > (m/mt))
            cout << "Chefina\n";
        else if((n/nt) < (m/mt))
            cout << "Chef\n";
        else cout << "Both\n";
    }
}