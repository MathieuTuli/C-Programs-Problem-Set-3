#include <stdio.h>
#include <math.h>

int main()
{
    int num,i,orig,orig2,count=0,dec=0,A,flag,ugh;

    do
    {
        printf("Enter an octal number: ");
        scanf("%d",&num);
        orig=num;
        flag=1;
        dec=0;
        count=0;

        while(num!=0)
        {
            num/=10;
            count++;
        }

        for (i=count-1;i>=0;i--)
        {
            A=(orig/pow(10,i));
            A=A%10;
            dec+=A*pow(8,i);
            if(A<0 || A>7)
            {
                printf("Not an octal number go again\n");
                flag=0;
                break;
            }
        }
    }while (flag==0);

    orig2=dec;
    count=0;
    while(dec!=0)
    {
        dec/=10;
        count++;
    }

    dec=0;

    for (i=count-1;i>=0;i--)
    {
        ugh=pow(2,i);
        printf("%d\n",ugh);
        dec+=(orig2/ugh)*(pow(10,i));
        orig2=orig2%ugh;
    }

    if (flag!=0) printf("The number %d in octal is %d in binary\n",orig,dec);
    return 0;
}

