#include <stdio.h>

int main()
{
    int a;
    printf("Enter your rating (1-5) : \n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Your rating is %d. \n", a);
        break;
    case 2:
        printf("Your rating is %d. \n", a);
        break;
    case 3:
        printf("Your rating is %d. \n", a);
        break;
    case 4:
        printf("Your rating is %d. \n", a);
        break;
    case 5:
        printf("Your rating is %d. \n", a);
        break;
    default:
        printf("Your rating is invalid !!! \n");
        break;
    }
    return 0;
}
// You cannot add values which represents a range. like, a>8.
// (in switch case.) There has to be a certain specific values like 1,2,3...... in switch case comment syntax.