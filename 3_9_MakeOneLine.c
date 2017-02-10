#include <stdio.h>

int main()
{
    char c;
    FILE* input=fopen("onetwo.txt","r");

     if ((input = fopen("onetwo.txt","r")) == NULL) {
      printf ("\n\n   grades.txt could not be opened\n\n");
      return -1;
    }
    while(fscanf(input,"%c",&c)!=EOF)
    {
        if (c=='\n') printf(" ");
        else putchar(c);
    }
    return 0;
}
