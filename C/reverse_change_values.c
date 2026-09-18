#include <stdio.h>

int main()
{
    int a = 1, b = 2, c = 3, d = 4, e;
    printf("a=%d\t b=%d\t c=%d\t d=%d\n", a, b, c, d);

    e = a;
    a = b;
    b = c;
    c = d;
    d = e;

    printf("a=%d\tb=%d\tc=%d\td=%d\n", a, b, c, d);

    return 0;
}