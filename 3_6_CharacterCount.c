#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    int letter=0,number=0,character=0;
    printf("Enter a sentence: ");

    do
    {
        c=getchar();
        if (isdigit(c)) number+=1;
        else if (c=='\n') break;
        else if (isalpha(c)) letter+=1;
        character+=1;
    }while(c!='\n');
    printf("%d letters, %d numbers, %d characters",letter,number,character);

    return 0;
}
