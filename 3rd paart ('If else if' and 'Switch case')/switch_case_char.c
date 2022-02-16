#include <stdio.h>

int main()
{
    char a;
    printf("Enter your character (a-e) : \n");
    scanf("%c", &a);
    switch (a)
    {
    case 'a':
        printf("Your character is %c. \n", a);
        break;
    case 'b':
        printf("Your character is %c. \n", a);
        break;
    case 'c':
        printf("Your character is %c. \n", a);
        break;
    case 'd':
        printf("Your character is %c. \n", a);
        break;
    case 'e':
        printf("Your character is %c. \n", a);
        break;
    default:
        printf("Your character is invalid !!! \n");
        break;
    }
    return 0;
}
// You cannot add values which represents a range. like, a>8. (in switch case.) There has to be a
//  certain specific values like 1,2,3...... in switch case comment syntax.