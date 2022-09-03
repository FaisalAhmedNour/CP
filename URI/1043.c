
#include<stdio.h>

int main()
{
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    if(A+B == C || A+C == B || B+C == A)
    {
        printf("Area = %0.1lf\n", 0.5*(A+B)*C);
    }
    else
    {
        printf("Perimetro = %0.1lf\n", A+B+C);
    }

    return 0;
}
