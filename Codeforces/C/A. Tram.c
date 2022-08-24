#include<stdio.h>'

int main()
{
    int stop, i, capasity = 0, enter, exit, init = 0;
    scanf("%d", &stop);
    for(i = 1; i <= stop; i++)
    {
        scanf("%d %d", &exit, &enter);
        enter = enter + init;
        init = enter - exit;
        if(init > capasity)
        {
            capasity = init;
        }
    }
    printf("%d\n", capasity);

    return 0;
}
