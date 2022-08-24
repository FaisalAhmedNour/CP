
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
        int arr[n];
        for(int i = 0; i < n; cin >> arr[i], ++i);
        int count = 0;
        for(int i = 0; i < n-1; ++i)
        {
            if(arr[i] > arr[i+1])
            {
                count++;
                ++i;
            }
        }
        cout << count << endl;
    }
}
