#include <stdio.h>

int main()
{
    int n;
    int total;
    int sum = 0;
    
    printf("Enter total number: ");
    scanf("%d", &total);
    for (int i = 1; i <= total; i++)
    {
        printf("Enter number: ");
        scanf("%d", &n);
        if (n > 0)
        {
            sum += n;
        }
    }
    printf("Sum of positive number: %d", sum);
    return 0;
}