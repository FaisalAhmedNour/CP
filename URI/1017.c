
#include<stdio.h>

int main()
{
    int time, speed;

    scanf("%d %d", &time, &speed);

    printf("%0.3lf\n", (float)(time * speed) / 12);

    return 0;
}
