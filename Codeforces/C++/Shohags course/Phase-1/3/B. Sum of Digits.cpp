#include<bits/stdc++.h>
using namespace std;

string t;

int conveart()
{
    int i = 0, sum = 0;
    while(t[i] != '\0'){
        sum += t[i] - '0';
        //cout << sum << endl;
        i++;
    }
    return sum;
}

int sum(int n)
{
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    cin >> t;
    if(t.size() == 1)
        cout << 0;
    else{
        int n = conveart();
        int cnt = 1;
        while(n > 9){
            n = sum(n);
            cnt++;
        }
        cout << cnt;
    }
}