
#include <stdio.h>

int main()
{

    double num;
    int i, n;
    int nota[12], notas[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};

    scanf("%lf", &num);

    n = num * 100;

    if(num < 0 || num > 1000000.00)
    {
        printf("Wrong number.");
    }
    else
    {
        for(i = 0; i < 12; i++)
        {
            nota[i] = n / notas[i];
            n = n % notas[i];
        }

        printf("NOTAS:\n");
        for(i = 0; i < 6; i++)
        {
            printf("%d nota(s) de R$ %d.00\n", nota[i], notas[i] / 100);
        }

        printf("MOEDAS:\n");
        for(i = 6; i < 12; i++)
        {
            printf("%d moeda(s) de R$ %0.2f\n", nota[i], (notas[i] / 100.0));
        }
    }

    return 0;
}
