
#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string guest, host, letters;
    cin >> guest >> host >> letters;
    string connect = guest + host;
    sort(connect.begin(),connect.end());
    sort(letters.begin(),letters.end());
    letters.compare(connect) == 0 ? cout << "YES" : cout << "NO";
}
