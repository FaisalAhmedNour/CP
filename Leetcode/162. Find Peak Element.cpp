
#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums)
{
    int mid;
    int st = 0, ed = nums.size()-1;
    while(st <= ed)
    {
        mid = st + ((ed - st) / 2);
        if(mid > 0 && mid < nums.size()-1)
        {
            if(nums[mid-1] <  nums[mid] && nums[mid+1] < nums[mid])
                break;
            else if(nums[mid-1] >  nums[mid])
                ed = mid -1;
            else
                st = mid + 1;
        }
        else if(mid == 0 && mid == nums.size()-1)
            break;
        else if(mid == 0)
        {
            if(nums[mid+1] < nums[mid])
                break;
            else
            {
                mid++;
                break;
            }
        }
        else if(mid == nums.size()-1)
        {
            if(nums[mid-1] < nums[mid])
                break;
            else
            {
                mid--;
                break;
            }
        }
    }
    return mid;
}

int main()
{
    vector<int> nums = {1};
    cout << findPeakElement(nums);
}
