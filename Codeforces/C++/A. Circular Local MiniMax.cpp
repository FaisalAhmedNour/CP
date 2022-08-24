
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, f = 1;
        cin >> n;
        int arr[n];
        vector<int> v;
        for(int i = 0; i < n; cin >> arr[i], i++);
        if(n % 2 == 1) f = 0;
        else
        {
            sort(arr, arr+n);
            int mid = n / 2;
            for(int i = 0, j = n/2; i < n/2, j < n; i++, j++)
            {
                v.push_back(arr[i]);
                v.push_back(arr[j]);
            }
            v.push_back(v[0]);
            v.push_back(v[1]);
            for(int i = 1; i < v.size()-1; i++)
            {
                if(v[i] > v[i+1] && v[i] > v[i-1]);
                else if(v[i] < v[i+1] && v[i] < v[i-1]);
                else
                {
                    f = 0;
                    break;
                }
            }
        }
        if(f)
        {
            cout << "YES\n";
            for(int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        else cout << "NO\n";
    }
}
/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int num;
        cin >> num;
        int arr[num];
        for(int i = 0; i < num; ++i) cin >> arr[i];
        vector<int> ans;
        if(num % 2 == 1)
            cout << "NO\n";
        else
        {
            int sz = num;
            sort(arr,arr+num);
            sz = sz / 2;
            for(int i = 0, j = sz; i < sz; ++i, ++j)
            {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
            int f = 1;
            ans.push_back(ans[0]);
            ans.push_back(ans[1]);
            for(int i = 1; i < ans.size()-1; ++i)
            {
                if((ans[i] > ans[i+1] && ans[i] > ans[i-1]) || (ans[i] < ans[i+1] && ans[i] < ans[i-1]))
                    f = 1;
                else
                {
                    f = 0;
                    break;
                }
            }
            if(f)
            {
                cout << "YES\n";
                for(int i = 0; i < ans.size()-2; ++i) cout << ans[i] << " ";
                cout << "\n";
            }
            else cout << "NO\n";
        }
    }
    return 0;
}

*/
