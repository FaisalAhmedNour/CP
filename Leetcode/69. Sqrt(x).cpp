
#include<bits/stdc++.h>
using namespace std;

int mySqrt(long long int x)
{
    long long int i = 1;
    for( ; i*i <= x; i++);
    return i-1;

}

int main()
{
    int x;
    cin >> x;
    cout << mySqrt(x);
}
