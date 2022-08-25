
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        long long int sum = 0, bd = 1;
        cin >> n;
        string bin;
        cin >> bin;
        for(int i = n-1; i >= 0; --i)
        {
            long long int num = bin[i] - '0';
            sum += (num*bd);
            bd *= 2;
        }
        cout << sum << endl;
    }
}
