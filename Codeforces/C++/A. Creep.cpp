
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x, y;
		cin >> x >> y;
		int z = x + y;
		while(z--)
		{
			if(x-->0) cout << "0";
			if(y-->0) cout << "1";
		 }
		 cout<<endl;
	}
}

/*
#include<bits/stdc++.h>
using namespace std;

int main(void){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		int tot=a+b;
		while(tot--){
			if(a-->0)cout<<"0";
			if(b-->0)cout<<"1";
		}cout<<endl;
	}
	return 0;
}
*/
