#include <stdio.h>

int main()
{
    // 97 -122 ASCII values for lower case characters
    char ch;
    printf("Enter a character : \n");
    scanf("%c", &ch);
    if (ch <= 122 && ch >= 97)
    {
        printf("The character you entered is of lowercase. \n");
    }
    else
    {
        printf("The character you entered is not of lowercase. \n");
    }
    return 0;
}