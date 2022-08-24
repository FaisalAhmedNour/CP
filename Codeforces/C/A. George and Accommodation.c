
#include<stdio.h>

int main()
{
    int rooms, people, capasity, i, count = 0;
    scanf("%d", &rooms);
    for(i = 1; i <= rooms; i++)
    {
        scanf("%d %d", &people, &capasity);
        if(people+2 <= capasity)
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
