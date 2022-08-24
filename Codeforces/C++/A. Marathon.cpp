
#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int a;
        cin >> a;
        int count = 0;
        for(int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            if(x > a) count++;
        }
        cout << count << endl;
    }
}
