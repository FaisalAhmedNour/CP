
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double c = ((a - b) * 100) / a;
    cout << fixed;
    cout << setprecision(18);
    cout << c;
}
