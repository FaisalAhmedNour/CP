#include<stdio.h>

float formula(int x){
    float cube, upper,lower;

    cube = x*x*x;
    upper = 3*x-1;
    lower = 2*x*x;


    return  cube*(upper/lower);
}


int main(){

     int a, i ,n, sum = 0;
     float avg,temp[10000];
     scanf("%d",&n);


     for ( i = 1; i <= n; i++)
     {
       temp[i-1] = formula(i);

     }
     for(i = 0; i < n; i++)
     {
         sum = sum + temp[i];
     }
      printf("%d\n", sum/n);

return 0;
}
