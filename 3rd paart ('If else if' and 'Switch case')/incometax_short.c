#include <stdio.h>

int main()
{
    float income, tax;
    printf("Enter your income : \n");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000)
    {
        tax = (income - 250000) * 0.05;
    }
    else if (income >= 500000 && income <= 1000000)
    {
        tax = (income - 250000) * 0.2;
    }
    else if (income >= 1000000)
    {
        tax = (income - 250000) * 0.3;
    }
    else
    {
        printf("No need to pay income tax.");
    }
    printf("You have to pay %f amount of tax by last date of this month. \n", tax);
    return 0;
}