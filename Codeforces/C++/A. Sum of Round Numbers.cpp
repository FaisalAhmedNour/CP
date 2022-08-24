
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int num;
    int task, i, j = 0, k = 0;
    cin >> task;
    int round[100000];
    while(task--)
    {
        cin >> num;
        for(i = 10; num/i != 0; i = i * 10)
        {
            if(num % i != 0)
            {
                round[j] = num % i;
                j++;
                num = num - (num % i);
            }
        }
        round[j] = num % i;
        j++;
        cout << j-k << endl;
        for(int i = j-1; i >= k; cout << round[i] << " " , i--);
        k = j - 1;
        cout << endl;
        j--;
    }
}
