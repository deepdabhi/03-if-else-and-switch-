#include <stdio.h>
int main()
{
    int a = 14, b = 5, res = 0;
    char op;
    printf("Enter operator : \n");
    scanf("%c", &op);
    switch (op)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        printf("Invalid operator : \n");
    }
    printf("%d %c %d = %d", a, op, b, res);
    return 0;
}