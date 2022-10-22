#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int ans = 100001, position;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] < ans){
            ans = arr[i];
            position = i+1;
        }
    }
    cout << ans << " " << position;
}