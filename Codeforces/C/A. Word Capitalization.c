
#include<stdio.h>
#include<string.h>

int main()
{
    char c[1000];

    scanf("%s", &c);

    c[0] = toupper(c[0]);

    printf("%s", c);

    return 0;
}
