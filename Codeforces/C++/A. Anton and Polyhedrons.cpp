
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int num, sum = 0;
    cin >> num;
    string str;
    while(num--)
    {
        cin >> str;
        if(str == "Icosahedron")
            sum = sum + 20;
        if(str == "Dodecahedron")
            sum = sum + 12;
        if(str == "Octahedron")
            sum = sum + 8;
        if(str == "Cube")
            sum = sum + 6;
        if(str == "Tetrahedron")
            sum = sum + 4;
    }
    cout << sum;
}
