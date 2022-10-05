
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr, sets;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        for(int i = 0; i < n; i++)
        {
            auto it = upper_bound(sets.begin(), sets.end(), arr[i]);
            if(it != sets.end())
                (*it) = arr[i];
            else sets.push_back(arr[i]);
        }
        cout << sets.size() << " ";
        for(int j = 0; j < sets.size(); j++)
            cout << sets[j] << " ";
        cout << "\n";
    }
}
