
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int num, count;
        cin >> num;
        int ele[num];
        for(int i = 0; i < num; cin >> ele[i], i++);
        sort(ele,ele+num);
        count = 1;
        for(int i = 0; i < num-1; i++)
        {
            if(ele[i+1] - ele[i] == 1 || ele[i+1] - ele[i] == 0)
                count++;
            else
                break;
        }
        cout << (count == num ? "YES\n" : "NO\n");
    }
}
