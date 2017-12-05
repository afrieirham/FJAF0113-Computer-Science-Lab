#include <stdio.h>
#include <math.h>

int main (void)

{
     float deg, rad;

     printf("Degree \t Radian \n");
     for (deg=0;deg<=360;deg+=20)
     {
          rad=deg/180;
          printf("%.0f \t %f PI\n", deg, rad);
     }

return 0;
}
