
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, flag = 0;
        cin >> n;
        int num[n];
        //input
        for(int i = 0; i < n;cin >> num[i], ++i);

        for(int i = 0; i < n; ++i)//bad dewa char
        {
            int sum = 0;
            for(int j = 0; j < n; ++j)//bad dewa sara
            {
                if(i != j)
                {
                    sum = sum + num[j];
                }
            }
            if(((double)sum / (n-1)) == num[i])
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout << "NO" << endl;
    }
}
