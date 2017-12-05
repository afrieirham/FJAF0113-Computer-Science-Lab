# include <stdio.h>
# include <math.h>

float GCD (int, int);

int main (void)
{
     int a , b ;
     puts("Input integer A");
     scanf("%d", a);
     puts("Input integer B");
     scanf("%d", b);

     GCD (a,b);
}

float GCD (int a, int b)
{
     int A, B;
     if (A%B == 0)
          return B;
     else
          return GCD (B,A%B);
}
