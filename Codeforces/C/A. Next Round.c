
#include<stdio.h>

int main()
{
    int n, i, k, pass = 0;

    scanf("%d %d", &n, &k);

    int point[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &point[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(point[i] >= point[k-1] && point[i] > 0)
        {
            pass++;
        }
    }

    printf("%d\n", pass);

    return 0;
}
