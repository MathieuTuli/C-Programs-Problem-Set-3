
/* read grades.txt, and summarize the information */

#include <stdio.h>

int main ( ) {

   FILE *in;

   int grade, num=0, sum=0, above50=0, below50=0;

   // open the file, and check (Mac users will have to specify a path to this file)

   if ((in = fopen("grades.txt","r")) == NULL) {
      printf ("\n\n   grades.txt could not be opened\n\n");
      return -1;
   }

   // read grades until EOF

   while (fscanf(in,"%d",&grade) != EOF) {

      num++;
      sum += grade;
      if (grade >= 50)
         above50++;
      else
         below50++;

   }

   fclose (in);

   printf ("\n\n   # of grades:   %d\n", num);
   printf ("   grades >= 50:  %d\n", above50);
   printf ("   grades < 50:   %d\n", below50);
   printf ("   average grade: %.1f\n\n", 1.*sum/num);

   return 0;
}
