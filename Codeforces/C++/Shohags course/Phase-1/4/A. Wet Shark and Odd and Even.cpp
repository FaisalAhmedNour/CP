#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> odd;
    long long sum = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x % 2 == 0)
            sum += x;
        else odd.push_back(x);
    }
    if(odd.size() % 2 == 0){
        for(int i = 0; i < odd.size(); i++){
            sum += odd[i];
        }
    }
    else{
        int temp = *min_element(odd.begin(),odd.end());
        for(int i = 0; i < odd.size(); i++){
            sum += odd[i];
        }
        sum -= temp;
    }
    cout << sum;
}
    