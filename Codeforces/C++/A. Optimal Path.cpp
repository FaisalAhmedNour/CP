
#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, m;
        long long sum = 0;
        cin >> n >> m;
        for(int i = 1; i < m; i++)
        {
            sum += i;
        }
        for(int i = 1; i <= n; i++)
        {
            sum += i * m;
        }
        cout << sum << endl;
    }
}
