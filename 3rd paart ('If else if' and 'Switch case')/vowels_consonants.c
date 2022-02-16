#include <stdio.h>

int main()
{
    char c;
    printf("Entera character. \n");
    scanf("%c", &c);
    if (c == 65 || c == 69 || c == 73 || c == 79 || c == 85 || c == 97 || c == 101 || c == 105 || c == 111 || c == 117)
    {
        printf("%c is a vowel. \n", c);
    }
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("%c is a vowel. \n", c);
    }
    else
    {
        printf("%c is a consonant.", c);
    }
    return 0;
}