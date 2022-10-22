#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sml_num;
    for(int i = 0; i < n-1; i++){
        sml_num = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[sml_num]){
                sml_num = j;
            }
        }
        swap(arr[i],arr[sml_num]);
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}