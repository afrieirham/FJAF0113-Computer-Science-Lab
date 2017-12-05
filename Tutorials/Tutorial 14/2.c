#include <stdio.h>
#include <math.h.>

int main ()
{
     int opt,i,ans;
     float U[3], V[3], ANS[3];

     puts("Enter U");
     for (i=0;i<3;i++)
     {
          printf("Enter value for U[%d]\t", i+1);
          scanf("%f", &U[i]);
     }

     puts("\nDisplay U");
     for (i=0; i<3; i++)
     {
          printf("%.2f\t", U[i]);
     }
     puts("");

     puts("\nEnter V");
     for (i=0;i<3;i++)
     {
          printf("Enter value for V[%d]\t", i+1);
          scanf("%f", &V[i]);
     }

     puts("\nDisplay V");
     for (i=0; i<3; i++)
     {
          printf("%.2f\t", V[i]);
     }
     puts("");


     puts("\nChoose Operation");
     puts("1. U dot V");
     puts("2. U cross V");
     scanf("%d", &opt);

     switch (opt)
     {
          case 1: puts("U dot V");

                   ANS[0]= U[0]*V[0];
                   ANS[1]= U[1]*V[1];
                   ANS[2]= U[2]*V[2];
                   ans = ANS[0]+ ANS[1]+ ANS[2];
                   printf("%f", ans);
          break;

          case 2: puts("U cross V");
          break;

          default: puts("Wrong Option");
     }
}
