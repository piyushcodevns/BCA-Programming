#include<stdio.h>

int main()
{
    int a=1,b=2,c=3,d;

    d=a;
    a=c;
    c=b;
    b=d;

    printf("%d\t%d\t%d",a,b,c);
    return 0;
}