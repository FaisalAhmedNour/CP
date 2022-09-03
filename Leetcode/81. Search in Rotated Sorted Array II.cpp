
#include<bits/stdc++.h>
using namespace std;

bool search(vector<int>& nums, int target)
{
    auto t = find(nums.begin(), nums.end(), target);
    if(t != nums.end()) return 1;
    return 0;
}

int main()
{
    vector<int> nums = {2,5,6,0,0,1,2};
    int target = 3;
    bool t = search(nums, target);
    if(t) cout << "true";
    else cout << "false";
}
