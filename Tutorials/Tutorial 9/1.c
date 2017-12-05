#include <stdio.h>
#include <math.h>
double F(double);
double G(double);

int main (void)
{
     double a, b, c, d, x=-2.5, xn;


    do

     {

          a=F(x);
          b=G(x);
          xn=x-(a/b);
          c=F(xn);
          d=fabs(c-a);
          x=xn;



          printf("Xn = %.5lf\n", x);
          printf("Xn+1 = %.5lf\n", xn);
          printf("a F(Xn) = %.5lf\n", a);
          printf("b F'(Xn) = %.5lf\n", b);
          printf("c F(Xn+1) = %.5lf\n", c);
          printf("d Diff = %.5lf\n\n", d);

     }
     while (d>0.00001);

printf("Root = %.5lf\n", xn);

}

double F (double x)
{
     double a;

     a=7.92+0.9*x-(x*x);

     return a;
}



double G (double x)
{
     double a;

     a=0.9-2*x;

     return a;
}





