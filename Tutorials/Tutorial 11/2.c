# include <math.h>
# include <stdio.h>

float sum (float);

int main (void)

{
     float x, ans;
     puts("Enter value");
     scanf("%f", &x);

     ans = sum (x);
     printf("The sum of is %f", ans);
return 0;
}




float sum (float x)
{
     if (x==0)
          return 0;
     else
          return pow (x,3) + sum (x-1);
}
