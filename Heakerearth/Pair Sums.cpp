
#include<bits/stdc++.h>
using namespace std;
int A[10000001] = {0};
int main()
{
    int n, k, M = 2000000;
    cin >> n >> k;
    if(k <= 2000000)
    {
        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            A[x]++;
            M = min(M,x);
        }
        if(M >= k)
        {
            cout << "NO";
            return 0;
        }
        for(int i = k-1; i >= k-i; i--)
        {
            if(i == k-i)
            {
                if(A[i] > 1)
                {
                    cout << "YES";
                    return 0;
                }
            }
            else if(A[i] != 0 && A[k-i] != 0)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
