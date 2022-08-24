
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        if(n % 4 != 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            int sum = 0, sum2 = 0;
            for(int i = 0; i < n/2; ++i)
            {
                cout << 2*(i+1) << " ";
                sum += 2*(i+1);
            }
            for(int i = 0; i < n/2; ++i)
            {
                if(i == n/2-1)
                {
                    cout << sum - sum2 << endl;
                    break;
                }
                else
                {
                    cout << 2*i + 1 << " ";
                    sum2 += 2*i + 1;
                }
            }
        }
    }
}
