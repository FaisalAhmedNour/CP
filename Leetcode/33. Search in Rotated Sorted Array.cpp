
#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target)
{
    auto it = find(nums.begin(), nums.end(), target);
    if(it == nums.end()) return -1;
    return (it - nums.begin());
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums {4,5,6,7,0,1,2};
    int target = 0;

    cout << search(nums, target);
}
