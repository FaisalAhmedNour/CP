
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    cin >> a;
    int c = a;
    if(a-c >= c+1-a) cout << ceil(a);
    else cout << floor(a);
}
