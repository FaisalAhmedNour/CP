#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n/2; i++){
        if(arr[i] != arr[n-1-i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}