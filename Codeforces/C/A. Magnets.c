
#include<stdio.h>

int main()
{
    int magnets;
    scanf("%d", &magnets);
    int position[magnets], groups = 0, i;
    for(i = 0; i < magnets; i++)
    {
        scanf("%d", &position[i]);
    }
    for(i = 0; i < magnets; i++)
    {
        if(position[i] != position[i+1])
        {
            groups++;
        }
    }
    printf("%d\n", groups);

    return 0;
}
