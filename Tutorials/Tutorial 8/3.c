#include <stdio.h>
#include <math.h>

double x (double);
double v (double);
double a (double);

int main (void)
{
     double X,V,A,t;

     for (t=0;t<=8.2;t+=0.2)
     {
          X=x(t);
          V=v(t);
          A=a(t);
          printf("At t = %.1lf s\n", t);
          printf("Distance     = %.3lf m\n", X);
          printf("Velocity     = %.3lf m/s\n", V);
          printf("Acceleration = %.3lf m/s^2\n\n\n", A);
     }

}

double x (double t)
{
     double d;
     d=(35*pow(t,3))+(12.2*pow(t,2))+(0.12*pow(t,4));
     return d;
}

double v (double t)
{
     double s;
     s=(105*pow(t,2))+(24.4*pow(t,1))+(0.48*pow(t,3));
     return s;
}

double a (double t)
{
     double h;
     h=(210*pow(t,1))+(1.44*pow(t,2))+(24.4*pow(t,0));
     return h;
}
