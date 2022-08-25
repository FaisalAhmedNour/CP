
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int year = x / 365;
    x = x % 365;
    int month = x / 30;
    int day = x % 30;
    cout << year << " years\n"
         << month << " months\n"
         << day << " days";
}

