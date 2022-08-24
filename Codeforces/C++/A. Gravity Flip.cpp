
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int col;
    cin >> col;
    int cubes[col];
    //input
    for(int i = 0; i < col; i++)
    {
        cin >> cubes[i];
    }

    sort(cubes,cubes+col);

    //output
    for(int i = 0; i < col; i++)
    {
        cout << cubes[i] << " ";
    }

    return 0;
}
