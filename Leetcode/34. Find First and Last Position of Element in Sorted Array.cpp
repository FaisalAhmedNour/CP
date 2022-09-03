
#include<bits/stdc++.h>
using namespace std;

int binary(vector<int>& nums, int target)
{
    int st = 0, ed = nums.size()-1;
    while(st <= ed)
    {
        int mid = st + (ed - st) / 2;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            st = mid + 1;
        else ed = mid - 1;
    }
    return -1;
}

int left(vector<int>& nums, int target, int mid)
{
    int st = 0, ed = nums.size()-1;
    while(mid >= st)
    {
        if(nums[mid] == target)
        {
            if(mid != st)
                mid--;
            else break;
        }
        else
        {
            return mid + 1;
        }
    }
    return mid;
}

int right(vector<int>& nums, int target, int mid)
{
    int st = 0, ed = nums.size()-1;
    while(mid <= ed)
    {
        if(nums[mid] == target)
        {
            if(mid != ed)
                mid++;
            else break;
        }
        else
        {
            return mid - 1;
        }
    }
    return mid;
}

vector<int> searchRange(vector<int>& nums, int target)
{
    vector<int> temp;
    int trg = binary(nums, target);
    //cout << trg << "\n";
    if(trg == -1)
    {
        temp.push_back(-1);
        temp.push_back(-1);
        return temp;
    }
    else
    {
        temp.push_back(left(nums, target, trg));
        temp.push_back(right(nums, target, trg));
        return temp;
    }
}

int main()
{
    vector<int> nums = {1};
    int target = 1;
    vector<int> ans = searchRange(nums, target);
    for(auto v : ans)
    {
        cout << v << " ";
    }
}
