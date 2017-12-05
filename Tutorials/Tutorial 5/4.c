#include <stdio.h>
#include <math.h>

int main (void)

{
  int col, row, num,x;

  printf("Enter a value\t");
  scanf("%d", &num);

  for (col=1;col<=num;col++)
        {
            for(row=1;row<=col;row++)
                {

                    printf ("%d", row);
                }
            printf ("\n");
        }

}


