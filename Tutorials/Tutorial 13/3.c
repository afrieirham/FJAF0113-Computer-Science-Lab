#include <stdio.h>
#include <math.h>

int fact (int);
int main ()
{
     int PascalTr[100][100];
     int row, col, m;
     puts("Enter a number");
     scanf("%d", &m);

     for (row=0; row<m; row++)
     {
          for (col=0;col<=row;col++)
          {
               PascalTr[row][col]= fact (row) /(fact(col)*fact(row-col));
               printf("%d\t", PascalTr[row][col]);
          }
          puts("");
     }

     return 0;
}

int fact(int i)
{
    int ans;

    if(i==0)
    {
        ans= 1;
    }
    else
    {
        ans= i*fact(i-1);
    }
    return ans;

}

