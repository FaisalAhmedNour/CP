
#include<iostream>
using namespace std;

int main()
{
    long long int n, m, a,f;
    cin >> n >> m >> a;

    f = n%a == 0 ? n/a : n/a+1;
    f=f*(m%a==0? m/a:m/a+1);

    cout <<f;

    return 0;
}
