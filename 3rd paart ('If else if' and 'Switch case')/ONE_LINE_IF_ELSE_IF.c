#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: \n");
    scanf("%d", &a);
    (a == 5) ? printf("It is 5.") : printf("It is not 5!");
    return 0;
}
// Not recommended to use.