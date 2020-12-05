#include<stdio.h>
void findroman();
int main()
{
    int num;
    scanf("%d",&num);
    findroman(num);
    return 0;
}
void findroman(int val) // 1000 900 500 400 100 90 50 40 10 9  5  4 1
                        //   m   cm  d   cd  c  xc  l  xl x ix v iv i
{
    while(val!=0)
    {
    if(val>=1000)
    {
        printf("m");
        val-=1000; //m-1000
    }
    else if(val>=900)
    {
        printf("cm");
        val-=900;
    }
    else if(val>=500)
    {
        printf("d");
        val-=500;
    }

    else if(val>=400)
    {
        printf("cd");
        val-=400;
    }
    else if(val>=100)
    {
        printf("c");
        val-=100;
    }
    else if(val>=90)
    {
        printf("xc");
        val-=90;
    }
    else if(val>=50)
    {
        printf("l");
        val-=5;
    }else if(val>=40)
    {
        printf("xl");
        val-=4;
    }
    else if(val>=10)
    {
        printf("x");
        val-=10;
    }
    else if(val>=9)
    {
        printf("ix");
        val-=9;
    }
    else if(val>=5)
    {
        printf("v");
        val-=5;
    }
    else if(val>=4)
    {
        printf("iv");
        val-=4;
    }
    else if(val>=1)
    {
        printf("i");
        val-=1;
    }
}
}
