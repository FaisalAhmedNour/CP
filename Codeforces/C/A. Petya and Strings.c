
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[101], s2[101];

    scanf("%s", &s1);
    scanf("%s", &s2);

    strupr(s1);
    strupr(s2);

   printf("%d\n", strcmp(s1, s2));

   return 0;
}
