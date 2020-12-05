#include<stdio.h>
#include<math.h>
int fact(int);
int main()
{
    double x,xy=0,sign=-1,ss=0;
    scanf("%f",&x);
    x=x*(3.14/180);
    float minus;
    //int plus=0;
    for(int ind =1;ind<=19;ind+2)
    {
       // printf("bye");
        sign=-sign;
        minus=sign*pow(x,ind)/fact(ind);
        //printf("%f",minus);
        xy=xy+minus;
    }
    //ss=sin(xy);
    printf("%lf",xy);
}
int fact(int val)
{
    int factorial=1;
    for(int j=1;j<=val;j++)
    {
//printf("hi");
        factorial=factorial*j;
    }
    //printf("hello");
    return(factorial);
}

