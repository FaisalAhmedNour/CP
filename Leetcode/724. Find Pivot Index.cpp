#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    long long int sum = std::accumulate(nums.begin(), nums.end(), 0);
    long long int preSum = 0, postSum = sum;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0)
        {
            postSum -= nums[i];
        }
        else
        {
            preSum += nums[i - 1];
            postSum -= nums[i];
        }
        if (preSum == postSum)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 1, -1};
    cout << pivotIndex(arr);
}