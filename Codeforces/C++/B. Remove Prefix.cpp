
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
        vector<int> arr;
        stack<int> alam;
        map<int, int> elem;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            elem[a]++;
            arr.push_back(a);
        }
        int j;
        for(j = 0; j < n; j++)
        {
            if(elem[arr[j]] > 1)
            {
                elem[arr[j]]--;
                while(!alam.empty())
                {
                    elem[alam.top()]--;
                    alam.pop();
                }
            }
            else if(elem[arr[j]] == 1)
            {
                alam.push(arr[j]);
            }
        }
        //cout << alam.size() << "\n";
        cout << n-alam.size() << "\n";
    }
}
