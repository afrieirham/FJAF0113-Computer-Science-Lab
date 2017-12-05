# include <stdio.h>
# include <math.h>

double Lon (double);
int main ()
{
     double x, ans;
     puts("Input for x between 0 to 2");
     scanf("%lf", &x);

     if (x<=0||x>2)
          puts("Wrong Input");
     else
          {
               Lon (x);
          }

}


double Lon (double x)
{
     double formula , ans = 0, i ;

     for (i=1 ; fabs(pow(-1,i+1) * pow(x-1,i) / i)>=1.0e-5 ; i++)
     {

               formula = pow(-1,i+1) * pow(x-1,i) / i;
               printf("Formula = %lf\t", formula);
               ans = ans + formula;
               printf("Ans = %lf\n\n", ans);


     }
     printf("Ln (%.2lf) = %lf", x, ans);
     return ans;
}
