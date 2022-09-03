
#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        for(auto v : nums)
        {
            count[v]++;
            if(count[v] > 1) return 1;
        }
        return 0;
    }

int main()
{
    vector<int> num = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    bool x = containsDuplicate(num);
    cout << (x == 1 ? "true" : "false");
}
