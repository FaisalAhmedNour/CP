
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rtnrn;

void call(vector<int>& nums, int n, vector<int>& temp)
{
    if(n == nums.size())
    {
        rtnrn.push_back(temp);
        return;
    }
    call(nums, n+1, temp);
    temp.push_back(nums[n]);
    call(nums, n+1, temp);
    temp.pop_back();
}

vector<vector<int>> subsets(vector<int>& nums)
{
    vector<int> temp;
    call(nums, 0, temp);
    return rtnrn;
}

void print(vector<vector<int>>& rtnrn)
{
    for(auto v : rtnrn)
    {
        for(auto x : v)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {1,2,3};
    subsets(nums);
    print(rtnrn);
}
