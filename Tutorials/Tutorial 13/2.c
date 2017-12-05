#include <stdio.h>
#include <math.h>

int main ()
{
     float db[1000][6], sum;
     int b,n,m;

     puts("Enter the number of student");
     scanf("%d", &b);

     puts("Enter marks for Maths, Chemistry, Physics, Sc. Comp accordingly");

     for (n=0;n<b;n++)
     {
         printf("Student %d\n", n+1);
         for (m=0; m<4; m++)
         {
              puts("Enter marks");
              scanf("%f", &db [n][m]);
              sum = sum + db [n][m];
         }
         db [n][4]=sum/m;
         printf("Average = %.2f m = %d\n", db[n][4],m);
         sum = 0;
     }
     printf("\n\n");
     printf("\t\t Math");
     printf("\t\t Chemistry");
     printf("\t Physics");
     printf("\t Sc. Computer");
     printf("\t Average\n\n");
     for (n=0;n<b;n++)
     {
          printf("Student %d\t", n+1);
          for (m=0;m<5;m++)
          {
               printf(" %.2f\t\t", db[n][m]);
          }
          printf("\n\n");
     }

return 0;
}
