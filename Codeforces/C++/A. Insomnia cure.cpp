
#include<iostream>
using namespace std;

int main()
{
    int kdrg, ldrg, mdrg, ndrg, d, count = 0;
    cin >> kdrg >> ldrg >> mdrg >> ndrg >> d;

    for(int i = 1; i <= d; i++)
    {
        if(i%kdrg == 0 || i%ldrg == 0 || i%mdrg == 0 || i%ndrg == 0)
        {
            count++;
        }
    }
    cout << count;

    /*
    if(kdrg == 1 || ldrg == 1 || mdrg == 1 || ndrg == 1)
    {
        cout << d;
    }
    else
    {
        int k[d], l[d], m[d], n[d];

        int k1 = 0, l1 = 0, m1 = 0, n1 = 0;
        for(int i = 2; i <= d; i++)
        {
            if(i % kdrg == 0)
            {
                k[k1] = i;
                k1++;
            }
            if(i % ldrg == 0)
            {
                l[l1] = i;
                l1++;
            }
            if(i % mdrg == 0)
            {
                m[m1] = i;
                m1++;
            }
            if(i % ndrg == 0)
            {
                n[n1] = i;
                n1++;
            }
        }

        int same, punched = 0;
        for(int i = 2; i <= d; i++)
        {
            same = 0;
            for(int j = 0; j < k1; j++)
            {
                if(i == k[j])
                {
                    same++;
                }
            }
            for(int j = 0; j < l1; j++)
            {
                if(i == l[j])
                {
                    same++;
                }
            }
            for(int j = 0; j < m1; j++)
            {
                if(i == m[j])
                {
                    same++;
                }
            }
            for(int j = 0; j < n1; j++)
            {
                if(i == n[j])
                {
                    same++;
                }
            }
            if(same > 0)
            {
                punched++;
            }
        }
        cout << punched;
    }
    */

    return 0;
}











