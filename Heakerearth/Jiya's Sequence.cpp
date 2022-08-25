
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin >> T;
    while(T--){
        long long int n, sum = 1; cin >> n;
        for(int i = 0; i < n; ++i){
            int x; cin >> x;
            sum *= x;
        }
        if(sum % 10 == 2 || sum % 10 == 3 || sum % 10 == 5){
            cout << "YES" << "\n";
        }
        else cout << "NO" << "\n";
    }
}
