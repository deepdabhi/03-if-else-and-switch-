//1. If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
//2. If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
//3. If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
//4. The year is a leap year (it has 366 days).
//5. The year is not a leap year (it has 365 days).
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the year:");
    scanf("%d", &a);
    if (a % 4 == 0 && a % 100 == 0 && a % 400 == 0)
    {
        printf("Year is a leap year (it has 366 days). \n");
    }
    else if (a % 4 == 0 && a % 100 == 0 && a % 400 != 0)
    {
        printf("Year is not a leap year (it has 365 days). \n");
    }
    else if (a % 4 == 0 && a % 100 != 0)
    {
        printf("Year is a leap year (it has 366 days). \n");
    }
    else
    {
        printf("Year is not a leap year (it has 365 days). \n");
    }
    return 0;
}