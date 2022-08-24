
#include<iostream>

using namespace std;

int main()
{
    long long int num, k, c;
    cin >> num >> k;

    c = num % 2 == 0 ? num / 2 : (num + 1) / 2;
    cout << (k <= c ? (k * 2) -1 : (k - c) * 2);

    return 0;
}
