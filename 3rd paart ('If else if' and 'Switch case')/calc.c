#include <stdio.h>
int main()
{
    int a, b, ch, res, f = 0;
    while (1)
    {
        printf("Enter two numbers. \n");
        scanf("%d%d", &a, &b);
        printf("Enter choice : \n1. add\n2. subtract\n3. multiply\n4. divide\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            res = a + b;
            break;
        case 2:
            res = a - b;
            break;
        case 3:
            res = a * b;
            break;
        case 4:
            if (b != 0)
            {
                res = a / b;
            }
            else
            {
                f = 1;
                printf("Can not divide by  zero.\n");
            }
            break;
        default:
            printf("Invalid choice. \n");
            f = 1;
        }
        if (f == 0)
        {
            printf("res = %d\n", res);
        }
    }
    return 0;
}