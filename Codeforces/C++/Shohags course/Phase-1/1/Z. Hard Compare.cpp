
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    long long int x = pow(a,b);
    long long int y = pow(c,d);
    if(x > y) cout << "YES";
    else cout << "NO";
}
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int a,b,c,d ;
	cin >> a >> b >> c >> d ;
	if(b*log(a) > d * log(c)) printf("YES\n");
	else printf("NO\n");
	return 0 ;
}
