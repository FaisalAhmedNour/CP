
#include<iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    if(n%2 == 0)
    {
        for(int i = 1; (i*2) < (n-i*2); ++i)
        {
            if((i*2) < (n-i*2))
            {
                count++;
            }
        }
        cout << count;
    }
    else cout << "0";
}
