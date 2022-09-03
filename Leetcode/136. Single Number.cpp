/*
#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        unordered_map<int,int> count;
        for(auto v : nums)
        {
            count[v]++;
        }
        for(auto v : count)
        {
            if(v.second == 1) return v.first;
        }
    }

int main()
{
    vector<int> nums = {2, 2, 1};
    cout << singleNumber(nums);
}
*/
#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        unordered_map<int,int> count;
        for(auto v : nums)
        {
            count[v]++;
        }
        int x;
        for(auto v : count)
        {
            if(v.second == 1) {
              x= v.first;
              break;
            }

        }
        return x;
    }

int main()
{
    vector<int> nums = {2, 2, 1};
    cout << singleNumber(nums);
}
