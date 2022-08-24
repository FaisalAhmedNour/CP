
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int task, minte, i, count = 0;
    cin >> task >> minte;
    int min = 240 - minte;
    for(i = 1; count <= min; i++)
        count += i*5;
    i - 2 <= task ?  cout << i-2 : cout << task;
}
