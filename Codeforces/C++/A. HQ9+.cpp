#include<iostream>

using namespace std;

int main()
{
    string input;
    cin >> input;
    int i = 0, count = 0;
    while(input[i] != '\0')
    {
        if(input[i] == 'H' || input[i] == 'Q' || input[i] == '9')
        {
            count++;
        }
        i++;
    }
    cout << (count > 0 ? "YES" : "NO");

    return 0;
}
