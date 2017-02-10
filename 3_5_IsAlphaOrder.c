#include <stdio.h>

int main()
{
    char a,b;
    int breaker=0,alp;

    printf("Enter a word: ");
    b=getchar();
    if(b>='A'&& b<='Z' ) printf("");
    else if (b>='a' && b<='z')
    {
        b+=-32;
    }
    do
    {
        a=getchar();
        if (a=='\n') break;

        if(a>='A'&& a<='Z' ) continue;
        else if (a>='a' && a<='z')
        {
            a+=-32;
        }
        if (a>=b)
        {
            alp=1;
            continue;
            printf("!");
        }
        else if (a<b)
        {
            alp=2;
            break;
        }
        b=a;
    }while (breaker==0);

    if(alp==2) printf("That word is NOT in alphabetical order");
    else if(alp==1) printf("That word is in alphabetical order");
}
