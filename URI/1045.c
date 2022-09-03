
#include<stdio.h>

int main()
{
    double X, Y, Z, A, B, C;

    scanf("%lf %lf %lf", &X, &Y, &Z);

    if(X > Y && X > Z)
    {
        A = X;
        if(Y > Z)
        {
            B = Y;
            C = Z;
        }
        else
        {
            B = Z;
            C = Y;
        }
    }
    else if(X < Y && Y > Z)
    {
        A = Y;
        if(X > Z)
        {
            B = X;
            C = Z;
        }
        else
        {
            B = Z;
            C = X;
        }
    }
    else
    {
        A = Z;
        if(Y > X)
        {
            B = Y;
            C = X;
        }
        else
        {
            B = X;
            C = Y;
        }
    }

    if(A >= B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(A*A == B*B+C*C)
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if(A*A > B*B+C*C)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(A*A < B*B+C*C)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(A == B && A == C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }


    return 0;
}
