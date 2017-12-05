#include <stdio.h>
#include <math.h>

int main(void)

{
    int row, col;

    for (col=10;col>=1;col--)
        {
            for(row=1;row<=col;row++)
                {
                    printf("HA");
                }
            printf("\n");
        }

    for (col=1;col<=10;col++)
        {
            for(row=1;row<=col;row++)
                {
                    printf("HA");
                }
            printf("\n");
        }
}
