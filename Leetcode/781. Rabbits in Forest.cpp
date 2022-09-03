
#include<bits/stdc++.h>
using namespace std;

int numRabbits(vector<int>& answers) {
        unordered_map<int,int> count;
        for(auto v : answers)
        {
            count[v]++;
        }
        int sum = 0;
        for(auto v : count)
        {
            sum += (v.second / (v.first+1)) * (v.first+1);
            if(v.second % (v.first+1) > 0) sum += (v.first+1);
        }
        return sum;
    }

int main()
{
    vector<int> answers = {0, 0, 1, 1, 1};
    cout << numRabbits(answers);
}
/*
1->2
2->1
2+3
*/
