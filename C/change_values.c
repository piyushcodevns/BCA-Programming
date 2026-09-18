#include <stdio.h>

int main()
{

    int a = 1, b = 2, c;
    printf("a=%d\tb=%d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("a=%d\tb=%d\n", a, b);

    printf("a=%d\tb=%d\n", a, b);
    c = a + b;
    a = c - a;
    b = c - b;
    printf("a=%d\tb=%d\n", a, b);

    printf("a=%d\tb=%d\n", a, b);
    c = a - b;
    a = a - c;
    b = c + a;

    printf("a=%d\tb=%d\n", a, b);

    printf("a=%d\tb=%d\n", a, b);
    c = a ^ b;
    a = a ^ c;
    b = c ^ a;

    printf("a=%d\tb=%d\n", a, b);
    return 0;
}