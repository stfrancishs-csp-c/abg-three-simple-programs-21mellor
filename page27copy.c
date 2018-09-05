#include <stdio.h>

int main(void)
{
    //List Variables
    float a,b;

    printf("How much of a bonus did you get?\n");
    scanf("%f", &a);

    //Bonus Equation
    b= .85*a;

    //Output
    printf("If you give 15 percent to charity, will you still\n");
    printf(" have $%.2f.", b);

    return 0;
    }
