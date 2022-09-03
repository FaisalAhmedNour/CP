
#include<stdio.h>

int main()
{
    int distance;
    double fuel;

    scanf("%d %lf", &distance, &fuel);

    printf("%lf km/l", distance / fuel);

    return 0;
}
