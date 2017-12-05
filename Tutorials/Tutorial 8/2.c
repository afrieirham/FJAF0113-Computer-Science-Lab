#include <stdio.h>
#include <math.h>

double q1 (double, double, double);
double q2 (double, double, double);
int main (void)
{
     float a,b,c,root;

     puts("Enter a, b, c values");
     scanf("%f%f%f", &a, &b, &c);
     root=pow(b,2)-(4*a*c);

     if (root<0)
          puts("Complex Number");
     else
          printf("Root = %.3lf and %.3lf\n", q1(a,b,c), q2(a,b,c));

     return 0;
}

double q1 (double a, double b, double c)
{
     double r;
     r= (-b + pow((pow(b,2)-(4*a*c)),0.5))/(2*a);
     return r;
}

double q2 (double a, double b, double c)
{
     double r;
     r= (-b - pow((pow(b,2)-(4*a*c)),0.5))/(2*a);
     return r;
}
