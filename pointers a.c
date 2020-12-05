#include<stdio.h>
void fun(int,int);
int main()
{
    int i=5,j=2,c=10;
    fun(i,j);
    printf("%d %d",i,j);
    return 0;
}
void fun(int a,int b) //changes made in formal parameter are nowhere reflected as only the value is passed and not the address
{
    a=a*a;
    b=b*b;

}

