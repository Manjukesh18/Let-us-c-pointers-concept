#include<stdio.h>
 leap(int);
int main()
    {
        int num;
        scanf("%d",&num);
        leap(num);
        return 0;
}
 leap(int val)
{
    if(val%100==0 && val%400!=0)
    {
        printf("Not Leap year");
    }
    else if(val%4==0)
    {
        printf("leap year");
    }


}

