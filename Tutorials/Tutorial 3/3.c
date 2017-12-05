#include <stdio.h>
#include <math.h>

#define KMH 1.60934

int main (void)
{
   float mile, kmh;
   int r;

   do
   {
      printf ("\n\nWhat's the wind speed ?\n");
      scanf ("%f", &mile);
      kmh=mile*KMH;
      printf ("Your wind speed in KM/H is %.2f\n\n", kmh);



      if (kmh>=119&&kmh<=153)

         printf ("Category One : Moderate Damage\n\n");

      else if (kmh>=154&&kmh<=177)

         printf ("Category Two : Considerable Damage\n\n");

      else if (kmh>=178&&kmh<=208)

         printf ("Category Three : Severe Damage\n\n");

      else if (kmh>=209&&kmh<=251)

         printf ("Category Four : Extreme Damage\n\n");

      else if (kmh>=252)

         printf ("Category Five : Total Damage\n\n");

      else

         printf ("None\n\n\n");

      printf ("1 or 2\n\n\n");
      scanf("%d", &r);
   }
   while (r==1);
   return 0;
}
