#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, cnt = 0;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        for(int i = 0, j = n-1; i < j; --j){
            if(arr[j] == 0){
                while(arr[i] != 1 && i < j){
                    i++;
                }
                if(arr[i] == 1) cnt++;
                i++;
            }
        }
        cout << cnt << endl;
    }
}