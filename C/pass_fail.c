#include <stdio.h>

int main()
{
    int marks;
    int total = 0;
    int pass = 0;
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter marks: ");
        scanf("%d", &marks);
        total = total + marks;
        if (marks >= 40)
        {
            printf("Pass\n");
            pass++;
        }
        else
        {
            printf("Fail\n");
        }
    }
    float percentage = (total / 500.0) * 100;
    if (pass == 5)
        printf("\nResult: PASS\n");
    else
        printf("\nResult: FAIL\n");

    printf("Total marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}