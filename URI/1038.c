
#include<stdio.h>

int main()
{
    int X, Y;
    double prise[5] = {4.00, 4.5, 5.00, 2.00, 1.50};
    double total;

    scanf("%d %d", &X, &Y);

    total = prise[X-1] * Y;

    printf("Total: R$ %0.2lf\n", total);

    return 0;
}
