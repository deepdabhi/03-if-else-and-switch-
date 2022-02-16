#include <stdio.h>
int main()
{
    while (1)
    {
        int num;
        printf("Enter an integer : \n");
        scanf("%d", &num);
        if (num > 0)
        {
            printf("%d is positive.\n", num);
        }
        else if (num < 0)
        {
            printf("%d is negative.\n", num);
        }
        else
        {
            printf("%d is zero.\n", num);
        }
    }
    return 0;
}