#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int mn = 0, mx = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] < arr[mn])
            mn = i;
        if(arr[i] > arr[mx])
            mx = i;
    }
    swap(arr[mn],arr[mx]);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}