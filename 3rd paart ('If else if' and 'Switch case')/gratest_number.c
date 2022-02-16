#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);
    printf("Enter c: \n");
    scanf("%d", &c);
    printf("Enter d: \n");
    scanf("%d", &d);
    if (a - b >= 0 && a - c >= 0 && a - d >= 0)
    {
        printf("Greatest number is %d", a);
    }
    else if (b - a > 0 && b - c > 0 && b - d > 0)
    {
        printf("Greatest number is %d", b);
    }
    else if (c - a > 0 && c - b > 0 && c - d > 0)
    {
        printf("Greatest number is %d", c);
    }
    else if (d - a > 0 && d - c > 0 && d - b > 0)
    {
        printf("Greatest number is %d", d);
    }
    return 0;
}