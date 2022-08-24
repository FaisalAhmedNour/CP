
#include<stdio.h>

int main()
{
    int stone, i, remove;

    scanf("%d", &stone);
    char stones[stone+1];

    scanf("%s", stones);
    for(i = 0; i < stone; i++)
    {
        if(stones[i] == stones[i+1])
        {
            remove++;
        }
    }
    printf("%d\n", remove);

    return 0;
}
