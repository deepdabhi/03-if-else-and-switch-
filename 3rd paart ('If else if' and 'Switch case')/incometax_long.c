#include <stdio.h>

int main()
{
    float income, tax1;
    printf("Enter your income : \n");
    scanf("%f", &income);
    tax1 = (income - 250000) * 0.05;
    if (income >= 250000 && income <= 500000)
    {
        printf("The tax to be paid by last date of this month is %f", tax1);
    }
    return 0;
}