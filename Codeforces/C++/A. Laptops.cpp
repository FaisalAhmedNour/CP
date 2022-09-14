#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<pair<int,int>> laptops;
    for(int i = 0; i < t; i++){
        int x, y;
        cin >> x >> y;
        laptops.push_back(make_pair(x,y));
    }
    // for(auto &v : laptops)
    //     cout << v.first << " " << v.second << "\n";
    sort(laptops.begin(),laptops.end());
    for(int i = 0; i < t-1; i++){
        if(laptops[i].first < laptops[i+1].first && laptops[i].second > laptops[i+1].second){
            cout << "Happy Alex\n";
            return 0;
        }
    }
    cout << "Poor Alex\n";
    return 0;
}