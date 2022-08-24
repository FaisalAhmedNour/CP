
#include<stdio.h>

int main()
{
    int limak, bob, year;

    scanf("%d %d", &limak, &bob);

    for(year = 1; ; year++)
    {
        limak = limak * 3;
        bob = bob * 2;
        if(limak > bob)
        {
            printf("%d", year);
            break;
        }
    }

    return 0;
}
