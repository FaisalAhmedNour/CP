#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x, ans = -1;
    cin >> x;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}