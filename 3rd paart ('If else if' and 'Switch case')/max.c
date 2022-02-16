#include <stdio.h>
int main()
{
    int a, b, c, max = 0;
    printf("Enter the value of a : \n");
    scanf("%d", &a);
    printf("Enter the value of b : \n");
    scanf("%d", &b);
    printf("Enter the value of c : \n");
    scanf("%d", &c);
    if (a > max)
    {
        max = a;
    }
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    printf("%d", max);
    return 0;
}