#include <stdio.h>
#include <math.h>

int main (void)

{
    int num, total=0;

    for (num=-10;num>=-100;num-=10)


        {
            printf("%d\n", num);
            total=total+num;
        }

    printf("\nTotoal = %d\n", total);
}
