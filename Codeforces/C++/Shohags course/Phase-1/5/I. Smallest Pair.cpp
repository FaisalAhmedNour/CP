#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int ans = 100000000;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                ans = min(ans,(arr[i]+arr[j]+j+1-(i+1)));
            }
        }
        cout << ans << "\n";
    }
}