#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ebony, lvory, total_damage;
    cin >> ebony >> lvory >> total_damage;
    int in = 0;
    int dic = (ebony > lvory ? ebony : lvory);
    while(in <= total_damage){
        if((total_damage-in) % dic == 0){
            cout << "YES";
            return 0;
        }
        in += (ebony > lvory ? lvory : ebony);
    }
    cout << "NO";
}