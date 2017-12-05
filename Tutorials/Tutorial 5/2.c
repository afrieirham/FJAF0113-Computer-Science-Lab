#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define rad_conv(x) x*(PI/180)

int main(void)

{
    int deg;
    float dian;

    printf("\tDegree\tRadian\n\n");

    for (deg=0;deg<=360;deg+=5)

        {
            dian=rad_conv(deg);
            printf("%10d %10.3f\n",deg,dian);
        }
}
