#include <stdio.h>
#include <math.h>
#define c 2.9979e+8

double E(double);//declare subprogram
int main (void)
{
     double m;
     int repeat;
     do
          {
               printf("Enter the value of mass\n");
               scanf("%lf", &m);
               printf("Energy = %.5e\n", E(m)); //calling subprogram
               puts("Press 1 to continue");
               scanf("%d", &repeat);
          }
     while (repeat==1);
     return 0;
}

double E(double m) //this is subprogram

{      double E;
       E=m*pow(c,2);
       return E;
}
