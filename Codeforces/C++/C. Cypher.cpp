
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        for(int i = 0; i < n; i++)
        {
            int x;
            string str;
            cin >> x >> str;
            for(int j = 0; j < str.size(); j++)
            {
                if(str[j] == 'D')
                {
                    arr[i]++;
                    if(arr[i] > 9) arr[i] = 0;
                }
                if(str[j] == 'U')
                {
                    arr[i]--;
                    if(arr[i] < 0) arr[i] = 9;
                }
            }
        }
        for(int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }
}
