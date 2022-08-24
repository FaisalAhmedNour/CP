
#include<stdio.h>

int main()
{
    int cost1, money, need, i, money_need = 0;

    scanf("%d %d %d", &cost1, &money, &need);

    for(i = 0; i <= need; i++)
    {
        money_need = money_need + cost1*i;
    }
    if(money_need > money)
    {
        printf("%d\n", money_need-money);
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
