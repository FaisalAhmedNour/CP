#include<bits/stdc++.h>
using namespace std;
int main()
/*
{
    int i,n,a,b,c;
    for(cin>>n;cin>>n>>a>>b;)
        for(i=2;i++<n&&cin>>c;)
            a*(c-a||c-b) ? cout<<(c-a&&c-b?i : 2-(a!=c))<<' ',a=0:0;
}
*/
{
    int t;
    cin >> t;
    while(t--)
    {
        int ele;
        cin >> ele;
        int arr[ele];
        for(int i = 0; i < ele; cin >> arr[i], i++);
        for(int i = 0; i < ele-1; i++)
        {
            if(arr[i] != arr[i+1] && i == 0)
            {
                if(arr[i+1] != arr[i+2])
                {
                    cout << i+2 << endl;
                    break;
                }
                else
                {
                    cout << i+1 << endl;
                    break;
                }
            }
            if(arr[i] != arr[i+1] && i != 0)
            {
                cout << i+2 << endl;
                break;
            }
        }
    }
}
