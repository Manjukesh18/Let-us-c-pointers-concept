
// 5 integers with sum,average and standard deviation
#include<stdio.h>
#include<math.h>
#define sq(x)(x*x)
void calc(int,int,int,int,int,float*,float*,float*);
int main()
{
    int n1,n2,n3,n4,n5;
    float sum,avg,sd;
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

    calc(n1,n2,n3,n4,n5,&sum,&avg,&sd);
    printf("sum is %f\n",sum);
    printf("avg is %f\n",avg);
    printf("sd is %f\n",sd);
    return 0;
}
void calc(int v1,int v2,int v3,int v4,int v5,float*add,float*mean,float*devn)
{
    *add=v1+v2+v3+v4+v5;
    *mean=*add/5;
    *devn=sqrt(((sq(v1-*mean))+(sq(v2-*mean))+(sq(v3-*mean))+(sq(v4-*mean))+(sq(v5-*mean)))/5.0);

}
