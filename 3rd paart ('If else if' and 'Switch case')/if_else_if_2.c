#include <stdio.h>

char main()
{
    char character;
    printf("Enter the character : \n");
    scanf("%c", &character);
    if (character == 'a')
    {
        printf("Your character is a. \n");
    }
    else if (character == 'b')
    {
        printf("Your character is b. \n");
    }
    else if (character == 'c')
    {
        printf("Your character is c. \n");
    }
    else if (character == 'd')
    {
        printf("Your character is d. \n");
    }
    else
    {
        printf("Your number is not a,b,c, or d !!!! \n");
    }

    return 'z';
}