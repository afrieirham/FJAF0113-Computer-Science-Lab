#include <stdio.h>
#define FOOT 12
#define METER 39.37
#define CM 2.54
#define MM 25.4

int main (void)

{
   float INCH;
     printf ("Enter Measurement in INCHES :");
     scanf ("%f", &INCH);

     printf("%.3f ft\n",INCH/FOOT);
     printf ("%.3f m\n",INCH/METER);
     printf("%.3f cm\n",INCH*CM);
     printf ("%.3f mm \n",INCH*MM);
     return 0;
}


