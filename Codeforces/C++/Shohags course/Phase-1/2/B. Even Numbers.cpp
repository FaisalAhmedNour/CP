
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if(a < 2) cout << -1;
	else{
        for(int i = 2; i <= a; i += 2)
            cout << i << endl;
	}
	return 0 ;
}
