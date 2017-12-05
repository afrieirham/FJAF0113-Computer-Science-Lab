#include <stdio.h>
#include <math.h>

int main (void)

{
    char name[100];
    int i,exp,pos;
    float pen,pay,bonus;


do
{
     puts("Your name ?");
     scanf("%s", &name);

     puts("Enter monthly pay");
     scanf("%f", &pay);

     puts("Choose position code");
     scanf("%d", &pos);

          if (pos==1)
          {
             bonus=0.5*pay;

               if (bonus>800)
               bonus=800;

               else
               bonus=bonus;
          }


          else if (pos==2)
          {
             bonus=pay;

               if (bonus>2000)
               bonus=2000;

               else
               bonus;
          }

          else if (pos==3)
          {
             bonus=1.5*pay;

               if (bonus>4000)
               bonus=4000;

               else
               bonus;
          }

          else if (pos==4)
          {
             bonus=2.5*pay;

               if (bonus>7500)
               bonus=7500;

               else
               bonus;
          }

          else
          {
               pen=0;
          }

     if (pen==0)
     puts("Invalid Job");

     else
     {

     puts("Years of experience " );
     scanf("%d", &exp);

          if (exp<2)
          pen=0.5*bonus;

          else if (exp>10)
          pen=bonus+100;

          else
          pen=bonus;

     puts(name);
     printf("Your bonus is %.2f",pen);
     puts("\nPress 1 to continue");
     scanf("%d", &i);

     }
}
while (i==1);

return 0;

}
