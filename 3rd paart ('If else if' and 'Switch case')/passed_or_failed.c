#include <stdio.h>

int main()
{
    float physics, chemistry, maths, total;
    printf("Enter your physics marks : \n");
    scanf("%f", &physics);
    printf("Enter your chemistry marks : \n");
    scanf("%f", &chemistry);
    printf("Enter your maths marks : \n");
    scanf("%f", &maths);
    total = (physics + chemistry + maths) / 3;
    if (physics < 33 || chemistry < 33 || maths < 33 || total < 40)
    {
        printf("You are failed.");
    }
    else
    {
        printf("You are passed. \n");
    }
    printf("Your percentage is : %f \n", total);
    return 0;
}