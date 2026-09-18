#include<stdio.h>

int main()
{
    int a=1,b=2;
    printf("a=%d\tb=%d\n",a,b);

    b=a;
    a=b+a;
    printf("a=%d\tb=%d\t",a,b);
    return 0;
}