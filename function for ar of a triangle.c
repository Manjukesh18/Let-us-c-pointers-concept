#include<stdio.h>
#include<math.h>
int S(int,int,int);
int main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);
    S(a,b,c);

    return 0;
}
int S(int x,int y,int z)
{
    float val;
    float area,s;
    s=(x+y+z)/2.0;
    area=sqrt(s*(s-x)*(s-y)*(s-z));
    printf("%f",area);

}
