#include <stdio.h>
#include <math.h>

int main ()
{
     int opt, i, j;
     float A[2][3],B[2][3], ANS[2][3];
     float k;

     puts("Enter Matrix A");

          for (i=0;i<2;i++)
          {
               for (j=0;j<3;j++)
               {
                    printf("Enter the value for A[%d][%d] : ", i+1, j+1);
                    scanf("%f", &A[i][j]);
               }
          }

     puts("Display Matrix A");

     for (i=0;i<2;i++)
     {
          for (j=0;j<3;j++)
          {
               printf("\t%.2f\t", A[i][j]);
          }
          puts("");
     }

     puts("Enter Matrix B");

          for (i=0;i<2;i++)
          {
               for (j=0;j<3;j++)
               {
                    printf("Enter the value for B[%d][%d] : ", i+1, j+1);
                    scanf("%f", &B[i][j]);
               }
          }

     puts("Display Matrix B");

     for (i=0;i<2;i++)
     {
          for (j=0;j<3;j++)
          {
               printf("\t%.2f\t", B[i][j]);
          }
          puts("");
     }

     puts("Choose Your Operation");
     puts("1. A + B");
     puts("2. kA");
     puts("3. kB");
     scanf("%d", &opt);

     switch (opt)
     {
          case 1: puts("A + B");

          break;

          case 2: puts("kA");
                  puts("Enter value for constant");
                  scanf("%f", &k);
                  for (i=0;i<2;i++)
                  {
                    for (j=0;j<3;j++)
                         {
                              ANS[0][0]= (A[0][0])*k;
                              ANS[1][0]= (A[1][0])*k;
                              ANS[0][1]= (A[0][1])*k;
                              ANS[1][1]= (A[1][1])*k;
                              ANS[0][2]= (A[0][2])*k;
                              ANS[1][2]= (A[1][2])*k;
                         }
                  }

                  puts("\nResult :");
                    for (i=0;i<2;i++)
                    {
                      for (j=0;j<3;j++)
                         {
                              printf("\t%.2f\t", ANS[i][j]);
                         }
                              puts("");
                    }

          break;

          case 3: puts("kB");
                  puts("Enter value for constant");
                  scanf("%f", &k);
                  for (i=0;i<2;i++)
                  {
                    for (j=0;j<3;j++)
                         {
                              ANS[0][0]= (B[0][0])*k;
                              ANS[1][0]= (B[1][0])*k;
                              ANS[0][1]= (B[0][1])*k;
                              ANS[1][1]= (B[1][1])*k;
                              ANS[0][2]= (B[0][2])*k;
                              ANS[1][2]= (B[1][2])*k;
                         }
                  }

                  puts("\nResult :");
                    for (i=0;i<2;i++)
                    {
                      for (j=0;j<3;j++)
                         {
                              printf("\t%.2f\t", ANS[i][j]);
                         }
                              puts("");
                    }


          break;

          default : puts("Wrong Option");
     }
}
