
#include<stdio.h>

int main()
{
    int n, i, lenth;

    scanf("%d", &n);

    for(i = 1; i <= n;  i++)
    {
        char word[100];
        scanf("%s", word);
        lenth = strlen(word);
        if(lenth > 10)
        {
            printf("%c%d%c\n", word[0], lenth-2, word[lenth-1]);
        }
        else
        {
            printf("%s\n", word);
        }
    }

    return 0;
}
