
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, count = 0;
    cin >> a >> b;
    for(int i = 0; i <= a; i++)
    {
        for(int j = 0; j <= a; j++)
        {
            if(i+j <= b && b-i-j <= a) count++;
        }
    }
    cout << count;
}
