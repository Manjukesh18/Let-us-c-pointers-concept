#include<stdio.h>
void a(int,int)
int main()
{
 int p=23,f=24;
 a(&p,&f);
 printf("%d %d",p,f);
 return 0;
}
void a(int q,int g)
{
    q=q+q;
    g=g+g;
}
