#include <stdio.h>
int main()
{
    int a, b, f = 0, ch, ans;
    while (1)
    {
        printf("Enter two numbers: \n");
        scanf("%d%d", &a, &b);
        printf("Enter choice: \n1. add\n2. subtraction\n3. multiplication\n4. division\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            ans = a + b;
            break;
        case 2:
            ans = a - b;
            break;
        case 3:
            ans = a * b;
            break;
        case 4:
            if (b != 0)
            {
                ans = a / b;
            }
            else
            {
                printf("Can not divide by zero.\n");
                f = 1;
            }
            break;
        default:
            printf("Invalid choice.\n");
            f = 1;
        }
        if (f == 0)
        {
            printf("ans = %d\n", ans);
        }
    }
    return 0;
}