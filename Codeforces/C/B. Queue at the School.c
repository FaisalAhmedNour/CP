
#include<stdio.h>

int main()
{
    int children, time, i, j, temp;
    scanf("%d %d", &children, &time);
    char arrangment[children];
    scanf("%s", &arrangment);
    for(j = 1; j <= time; j++)
    {
        for(i = 0; i < children; i++)
        {
            if(arrangment[i] == 'B' && arrangment[i+1] == 'G')
            {
                temp = arrangment[i];
                arrangment[i] = arrangment[i+1];
                arrangment[i+1] = temp;
                i++;
            }
        }
    }
    printf("%s\n", arrangment);

    return 0;
}
