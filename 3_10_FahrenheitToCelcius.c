#include <stdio.h>

double F2C(double tempF)
{
    return (5./9.*(tempF-32.));
}
int main()
{
    double a;
    printf("Enter the temp in fahrenheit: ");
    scanf("%lf",&a);
    printf("The temp in celcius is %.1f",F2C(a));
    return 0;
}
