#include <stdio.h>
#include <math.h>

double s (double,double,double);
double AREA (double,double,double,double);

int main (void)
{
     double m, q, r, A, S, rep;

     do
     {

          puts("Enter the 3 lengths of side of triangle");
          scanf("%lf%lf%lf", &m, &q, &r);
          S=s(m, q, r);
          A=AREA(S, m, q, r);
          printf("AREA = %lf\n\n", A);
          puts("Press 1 to continue");
          scanf("%lf", &rep);
     }

     while (rep==1);
return 0;
}

double AREA(double S, double m, double q, double r)
{
     double A;
     A=sqrt(S*(S-m)*(S-q)*(S-r));
     return A;
}

double s (double m, double q, double r)
{
     double s;
     s=(m+q+r)/2;
     return s;
}
