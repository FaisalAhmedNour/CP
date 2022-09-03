
#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
    vector<int> nums;
    for(int i = 0, j = 0; i < nums1.size() || j < nums2.size(); )
    {
        if(i == nums1.size())
        {
            nums.push_back(nums2[j]);
            j++;
        }
        else if(j == nums2.size())
        {
            nums.push_back(nums1[i]);
            i++;
        }
        else
        {
            if(nums1[i] <= nums2[j])
            {
                nums.push_back(nums1[i]);
                i++;
            }
            else
            {
                nums.push_back(nums2[j]);
                j++;
            }
        }
    }
    for(auto v : nums)
    {
        cout << v << " ";
    }
    cout << endl;
    int mid = nums.size() / 2;
    if(nums.size() % 2 == 0)
        return (double)(nums[mid] + nums[mid-1]) / 2;
    else return nums[mid];
}

int main()
{
    vector<int> nums1 = {1,2}, nums2 = {3,4};
    double ans = findMedianSortedArrays(nums1, nums2);
    cout << ans;
}
