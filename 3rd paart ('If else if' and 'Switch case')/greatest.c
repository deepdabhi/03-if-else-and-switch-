#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value odf a : ");
    scanf("%d", &a);
    printf("Enter the value odf a : ");
    scanf("%d", &b);
    printf("Enter the value odf a : ");
    scanf("%d", &c);
    int max = a;
    if (b > max)
    {
        max = b;
    }
    else if (c > max)
    {
        max = c;
    }
    printf("Greatest of all number is %d.", max);
}