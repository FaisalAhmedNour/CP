#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    cout << "floor " << a << " / " << b << " = " << floor(a / b) << endl
         << "ceil " << a << " / " << b << " = " << ceil(a / b) << endl
         << "round " << a << " / " << b << " = " << round(a / b) << endl;
}
