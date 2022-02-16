#include <stdio.h>
int main()
{
    // char ch = '+';
    // printf("%d",ch);
    int a = 4, b = 5, res = 0;
    char op;
    // printf("Enter a & b : \n");
    // scanf ("%d %d",&a,&b);
    // printf("Enter b : \n");
    // scanf ("%d",&b);
    printf("Enter operator : \n");
    scanf("%c", &op);
    switch (op)
    {
    case '+':
        res = a + b;
        break;
        // case 10 :
        // res = a+b;
        // break;
    }
    printf("%d", res);
    return 0;
}