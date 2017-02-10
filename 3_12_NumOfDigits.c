#include <stdio.h>


int digits (int num)
{
    int count=0;
    if (num<=0) return -1;
    else
    {
        while(num!=0)
        {
            num/=10;
            count++;
        }

    }
    return count;
}
int main()
{
    int num,number;

    printf("Enter a positive integer: ");
    scanf("%d",&num);

    number=digits(num);

    if(number==-1) printf("Sorry you entered a non-positive number");
    else printf("The number of digits is %d",number);

    return 0;

}
