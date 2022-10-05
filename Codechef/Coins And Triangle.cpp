
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x = 0;
    cin >> t;
    vector<int> arr;
    for(int i = 1; x <= 1000000000; i++)
    {
        x += i;
        arr.push_back(x);
    }
    while(t--)
    {
        int n, mid, f = 1;
        cin >> n;
        int st = 0, ed = arr.size()-1;
        while(st <= ed)
        {
            mid = st + (ed - st) / 2;
            if(arr[mid] == n)
            {
                cout << mid + 1 << "\n";
                f = 0;
                break;
            }
            else if(arr[mid] > n)
                ed = mid - 1;
            else st = mid + 1;
        }
        if(f)
        {
            if(arr[st] < n)
                cout << st + 1 << "\n";
            else cout << ed + 1 << "\n";
        }
    }
}
