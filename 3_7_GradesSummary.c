#include <stdio.h>

int main()
{
    int sum,average=0,count=0,count2=0;
    FILE* input=fopen("grades.txt","r");

    if ((input = fopen("grades.txt","r")) == NULL) {
      printf ("\n\n   grades.txt could not be opened\n\n");
      return -1;
    }
    while(fscanf(input,"%d",&sum)!=EOF)
    {
        count++;
        average+=sum;
        if(sum<50) count2++;

    }
    average/=count;
    printf("There are %d grades, %d of which are below 50, %d of which are 50 above, and of which the average is %d\n",count,count2,count-count2,average);
    fclose(input);
    return 69;
}
