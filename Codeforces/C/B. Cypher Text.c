
#include<stdio.h>
#include<string.h>

int main()
{
    char s[54];
    int i, leanth;

    scanf("%s", &s);

    leanth = strlen(s);

    for(i = 0; i < leanth; i++)
    {
        s[i] = s[i] + ('e'-'a');
    }

    printf("%s", s);

    return 0;
}
