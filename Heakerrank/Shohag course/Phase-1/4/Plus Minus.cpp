#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N];
    int positive = 0, negative = 0, zero = 0;
    for(int i = 0; i < N; i++)
        cin >> arr[i];
    for(int i = 0; i < N; i++){
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else zero++;
    }
    cout << fixed;
    cout << setprecision(6) << (double)positive/N << endl;
    cout << setprecision(6) << (double)negative/N << endl;
    cout << setprecision(6) << (double)zero/N << endl;
}