#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
    int num, po;
    float val;
    scanf("%d %d",&num,&po);
    val=power(num,po);
    printf("%f",val);
    return 0;
}
int power(int a,int b)
{
    float ans;
    ans=pow(a,b);
    return ans;

}
