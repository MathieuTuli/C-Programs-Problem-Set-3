#include <stdio.h>

int main()
{
    int num;
    FILE* input=fopen("grades.txt","r");
    FILE* output=fopen("grades2.txt","w");

    if ((input = fopen("grades.txt","r")) == NULL)
    {
        printf ("\n\n   grades.txt could not be opened\n\n");
        return -1;
    }
    while(fscanf(input,"%d",&num)!=EOF)
    {
        fprintf(output,"%d",num);
        fprintf(output,"\n");

    }
    return 0;
}
