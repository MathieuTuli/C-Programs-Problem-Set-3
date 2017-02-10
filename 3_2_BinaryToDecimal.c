#include <stdio.h>
#include <math.h>

int main()
{
    int num, i,orig,count=0,dec=0,A;

    printf("Enter a binary number: ");
    scanf("%d",&num);

    orig=num;

    while(num!=0)
    {
        num/=10;
        count++;
    }

    for (i=count-1;i>=0;i--)
    {
        A=(orig/pow(10,i));
        A=A%10;
        dec+=A*pow(2,i);

        if(A!=0 && A!=1)
        {
            printf("Not a binary number go again");
            return 0;
        }
    }
    printf("The number %d in binary is %d in decimal",orig,dec);
    return 0;
}
