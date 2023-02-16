#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n * 2];
        bool isIn[n * 2] = {false};
        for (int i = 0; i < n * 2; i++)
        {
            cin >> arr[i];
        }
        vector<int> result;
        for (int i = 0; i < n * 2; i++)
        {
            if (isIn[i] == false)
            {
                result.push_back(arr[i]);
                for (int j = i; j < n * 2; j++)
                {
                    if (arr[i] == arr[j])
                    {
                        isIn[j] = true;
                    }
                }
            }
        }
        for (auto v : result)
        {
            cout << v << " ";
        }
        cout << endl;
    }
}
