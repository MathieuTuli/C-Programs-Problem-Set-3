#include <stdio.h>

int main()
{
    char c;
    int count=0;

    printf("Enter whatever you want: ");

    c=getchar();

    while(c!='\n')
    {
        count++;
        c=getchar();
    }

    printf("You typed %d characters",count);

    return 0;
}
