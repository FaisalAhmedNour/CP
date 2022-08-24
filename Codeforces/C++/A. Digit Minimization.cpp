
#include<bits/stdc++.h>

using namespace std;

int n;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int arr[20];
        int i;
        cin >> n;
        for(i = 0; n != 0; ++i)
        {
            arr[i] = n%10;
            n = n / 10;
        }
        if(i == 2)
        {
            cout << arr[0] << endl;
        }
        else
        {
            cout << (*min_element(arr, arr+i)) << endl;
        }
    }
}
