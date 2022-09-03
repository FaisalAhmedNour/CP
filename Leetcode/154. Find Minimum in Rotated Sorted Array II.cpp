
#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums)
{
    return *min_element(nums.begin(), nums.end());
}

int main()
{
    vector<int> nums = {3,4,5,1,2};
    cout << findMin(nums);
}
