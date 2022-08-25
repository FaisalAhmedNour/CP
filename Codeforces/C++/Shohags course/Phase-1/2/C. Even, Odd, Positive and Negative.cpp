
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, even = 0, odd = 0, positive = 0, negative = 0;
    cin >> a;
    for(int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        if(x % 2 == 0) even++;
        else odd++;
        if(x > 0) positive++;
        else if(x < 0) negative++;
    }
    cout << "Even: " << even << endl
         << "Odd: " << odd << endl
         << "Positive: " << positive << endl
         << "Negative: " << negative << endl;
return 0 ;
}
