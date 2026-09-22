#include <stdio.h>

int main()
{
    int n;
    int total;
    int negative = 0;
    int positive = 0;

    printf("Enter value of n: ");
    scanf("%d", &total);
    for (int i = 1; i <= total; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &n);
        if (n < 0)
        {
            negative++;
        }
        else
        {
            positive++;
        }
    }
    printf("Negative : %d\n", negative);
    printf("Positive : %d\n", positive);
}