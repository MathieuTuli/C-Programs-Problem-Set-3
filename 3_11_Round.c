#include <stdio.h>


int round(double a);

int main()
{
    double a;

    printf("Enter a number to be rounded: ");
    scanf("%lf",&a);
    printf("The number rounded is %d",round(a));

    return 0;
}

int round (double a)
{
    int b;
    if (a>0.5) b=(a+0.5);
    else b=(a-0.5);
    return b;
}
