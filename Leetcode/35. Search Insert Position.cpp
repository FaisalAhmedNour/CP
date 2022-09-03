
#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target)
{
    int st = 0, ed = nums.size()-1;
    int last = ed;
    while(ed - st > 1)
    {
        int mid = (st + ed) / 2;
        if(nums[mid] < target)
            st = mid + 1;
        else ed = mid;
    }
    if(nums[st] == target) return st;
    else if(nums[ed] == target) return ed;
    else
    {
        if(nums[st] < target && nums[ed] > target)
            return ed;
        else if(nums[ed] < target) return ed + 1;
        else return st;
    }
}

int main()
{
    vector<int> nums = {1,3,5,6};
    int target = 0;
    cout << searchInsert(nums, target);
}
