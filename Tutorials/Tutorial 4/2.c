#include <stdio.h>
#include <math.h>

int main (void)

{
   int NOS=0, TM=0, GRADE;
   float mean;

   printf("\nEnter Grade  \t\t\t\t\t\t\t\t\t\t\t\t\t0 to exit\n\n");
   scanf("%d", &GRADE);

   while (GRADE!=0)

      {
            TM=TM+GRADE;
            NOS=NOS++;
            printf("\nEnter Grade  \t\t\t\t\t\t\t\t\t\t\t\t\t0 to exit\n\n");
            scanf("%d", &GRADE);
      }

   if (NOS==0)

      printf("\nNo grades were entered\n\n");

   else

      printf("\nThe total mark is %d\n\n", TM);
      mean=(float)TM/NOS;
      printf("\nThe mean is %.2f\n\n", mean);

}
