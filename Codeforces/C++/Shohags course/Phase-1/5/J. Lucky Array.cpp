#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int mn = 100001, cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mn = min(mn,arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == mn)
            cnt++;
    }
    if(cnt % 2 == 0)
        cout << "Unlucky";
    else cout << "Lucky";
}