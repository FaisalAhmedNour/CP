//https://www.spoj.com/problems/MOZSATLA/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        int arr[N-1];
        vector<int> lost;
        for(int i = 0; i < N-1; i++)
            cin >> arr[i];
        for(int i = N-2; i >= 0; i--){
            if(arr[i] == 0){
                lost.push_back(arr[i+1]);
                arr[i] = arr[i+1];
            }
            else if(arr[i] == 1)
                lost.push_back(arr[i]+1);
            else if(arr[i] == 2)
                lost.push_back(arr[i]-1);
        }
        lost.push_back(arr[0]);
        reverse(lost.begin(),lost.end());
        for(int i = 0; i < N; i++)
        cout << lost[i] << " ";
    }
}