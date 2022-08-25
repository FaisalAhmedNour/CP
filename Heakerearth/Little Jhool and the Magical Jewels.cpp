
#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	cin >> num;
	while(num--)
    {
        string ruby;
        cin >> ruby;
        unordered_map<char,int> count;
        for(auto v : ruby)
        {
            count[v]++;
        }
        int x = min({count['r'],count['u'],count['b'],count['y']});
        cout << x << endl;
    }
}
