
#include<iostream>

using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    int x[n], y[n];
    for(int i = 0; i < n; cin >> x[i] >> y[i], i++);
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(x[i] > x[j])
            {
                swap(x[i],x[j]);
                swap(y[i],y[j]);
            }
        }
    }

    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(s > x[i])
        {
            s = s + y[i];
            count++;
        }
        else
        {
            break;
        }
    }
    count == n ? cout << "YES" : cout << "NO";
}
