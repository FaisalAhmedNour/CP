#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, cnt = 0;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0, j = 1; i < n; j++){
            if(arr[i] > j){
                cnt += arr[i] - j;
                j = arr[i];
                i++;
                //cout << arr[i] << " " << j << endl;
            }
            else i++;
        }
        cout << cnt << endl;
    }
}