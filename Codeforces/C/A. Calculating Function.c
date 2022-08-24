
#include<stdio.h>

int main()
{
    long long n, i, fn = 0;
    scanf("%lld", &n);

    if(n%2 == 1)
    {
        printf("%lld", -(n+1)/2);
    }
    else
    {
        printf("%lld", n/2);
    }

    return 0;
}
