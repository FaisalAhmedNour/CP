
#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, f = 1;
        cin >> n;
        int x = n;
        while(f){
            if(x % 3 == 0){
                int a = x / 3;
                int b = a + 1;
                while(f){
                    if((n - (a + b)) > 0){
                        cout << a << " " << b << " " << n-(a+b) << endl;
                        f = 0;
                    }
                    else a--;
                }
            }
            else x++;
        }
    }
}
