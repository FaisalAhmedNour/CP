
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int citizen;
    cin >> citizen;
    int burles[citizen];
    for(int i = 0; i < citizen; cin >> burles[i], ++i);
    int walfare = *max_element(burles,burles+citizen);
    int minimum_burles = 0;
    for(int i = 0; i < citizen; ++i)
    {
        minimum_burles += walfare - burles[i];
    }
    cout << minimum_burles;
}

