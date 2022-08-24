
#include<iostream>

using namespace std;

int main()
{
    int n, m, count;
    cin >> n >> m;
    for(int i = n, j = m; i > 0 && j > 0; i--, j--)
    {
        count++;
    }
    cout << (count % 2 == 0 ? "Akshat" : "Malvika");
}
