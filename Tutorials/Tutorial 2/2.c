#include <stdio.h>

#define PI 3.14159
#define V(x) 4.0/3*PI*pow(x,3)

int main (void)
{
   float radius=1;
   printf("RADIUS\t\tVOLUME\n");
   printf ("%.2f m\t\t%.4f m^3\n",radius,V(radius));
   printf ("%.2f m\t\t%.4f m^3\n",radius+1,V(radius+1));
   printf ("%.2f m\t\t%.4f m^3\n",radius+2,V(radius+2));
   printf ("%.2f m\t\t%.4f m^3\n",radius+3,V(radius+3));
   printf ("%.2f m\t\t%.4f m^3\n",radius+4,V(radius+4));
   return 0;
}

