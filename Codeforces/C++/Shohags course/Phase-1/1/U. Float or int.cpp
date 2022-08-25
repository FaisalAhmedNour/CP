
#include<bits/stdc++.h>
using namespace std;

int main()
{
    float num;
    cin >> num;
    int n = num;
    double f = num - n;
    if(f == 0) cout << "int " << n;
    else cout << "float " << n << " " << setprecision(3) <<f;
}
