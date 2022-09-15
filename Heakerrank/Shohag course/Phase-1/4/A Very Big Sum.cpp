#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    long long int arr[N];
    long long int sum = 0;
    for(int i = 0; i < N; i++)
        cin >> arr[i];
    for(int i = N-1; i >= 0; i--)
        sum += arr[i];
    cout << sum;
}