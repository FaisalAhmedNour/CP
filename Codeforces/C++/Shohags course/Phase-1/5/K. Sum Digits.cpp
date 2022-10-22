#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int n;
    string num;
    cin >> n >> num;
    int sum = 0, i = 0;
    while(num[i] != '\0'){
        sum += num[i] - '0';
        i++;
    }
    cout << sum;
}