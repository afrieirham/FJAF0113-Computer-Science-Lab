#include <stdio.h>
#include <math.h>

int main ()
{
     int i, j, c, d, k, M[2][2], ANS [2][2];
     float A1[2][2],D,sum, mult[2][2];

// Matrice Input
     for (i=0;i<2;i++)
     {
          for (j=0;j<2;j++)
          {
               printf("Enter the matrices m[%d][%d] : ", i, j);
               scanf("%d", &M[i][j]);
          }
     }

//ORIGINAL Matrice Output
     puts("\nDisplay Original Matrices :");
     for (i=0;i<2;i++)
     {
          for (j=0;j<2;j++)
          {
               printf("\t%d\t", M[i][j]);
          }
          puts("");
     }

//Sign and Diagonal Change
     for (i=0;i<2;i++)
     {
          for (j=0;j<2;j++)
          {
               if (i==j)
               {
                    ANS[0][0]= M[1][1];
                    ANS[1][1]= M[0][0];
               }
               else
               {
                    ANS[1][0]= -M[1][0];
                    ANS[0][1]= -M[0][1];
               }

          }
     }

//CHANGED Output
     puts("\nDisplay Diagonal Change and Sign Change :");
     for (i=0;i<2;i++)
     {
          for (j=0;j<2;j++)
          {
               printf("\t%d\t", ANS[i][j]);
          }
          puts("");
     }

//Finding Determinant
     D=(M[0][0]*M[1][1]) - (M[0][1]*M[1][0]);

//Determinant Output
     printf("\nDeterminat = %.0f\n\n", D);

//Operation
     for (i=0;i<2;i++)
     {
          for (j=0;j<2;j++)
          {
               mult[0][0]= (ANS[0][0])*(1/D);
               mult[1][1]= (ANS[1][1])*(1/D);
               mult[1][0]= (ANS[1][0])*(1/D);
               mult[0][1]= (ANS[0][1])*(1/D);
          }
     }

//Inverse
     puts("\nDisplay Inverse :");
     for (i=0;i<2;i++)
     {
          for (j=0;j<2;j++)
          {
               printf("\t%.2f\t", mult[i][j]);
          }
          puts("");
     }
return 0;
}
