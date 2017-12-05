#include <stdio.h>
#include <math.h>


int main (void)

{
     int class, hourin, minin, hourout, minout, hourt, mint, AAA;
     float cost;

     do
        {
        puts("Enter your vehicle class : \n1. Car \n2. Truck \n3. Bus\n");
        scanf("%d", &class);
        puts("Enter the hour vehicle entered (0-24):");
        scanf("%d", &hourin);
        puts("Enter the minute vehicle entered (0-60):");
        scanf("%d", &minin);
        puts("Enter the hour vehicle leave (0-24):");
        scanf("%d", &hourout);
        puts("Enter the minute vehicle leave (0-60) :");
        scanf("%d", &minout);



switch (class)
        {
        case 1://car

                //calculating total time
                if(minout<minin)
                     {
                          hourout=hourout-1;
                          minout=minout+60;
                          hourt=hourout-hourin;
                          mint=minout-minin;
                          hourout=hourout+1;
                          minout=minout-60;
                     }

                else
                     {
                          hourt=hourout-hourin;
                          mint=minout-minin;
                     }


                if(mint>0)
                     {
                          mint=0;
                          hourt=hourt+1;
                     }
                else
                     {
                          mint=mint;
                          hourt=hourt;
                     }


                //rounding part and costing part
                if(hourt>3)
                     {
                          hourt=hourt-3;
                          cost=hourt*1.5;
                          cost=cost+3;
                          hourt=hourt+3;
                     }

                else
                     {
                          cost=hourt*1;
                     }


                break;

        case 2://truck

                //calculating total time
                if(minout<minin)
                     {
                          hourout=hourout-1;
                          minout=minout+60;
                          hourt=hourout-hourin;
                          mint=minout-minin;
                          hourout=hourout+1;
                          minout=minout-60;
                     }

                else
                     {
                          hourt=hourout-hourin;
                          mint=minout-minin;
                     }


                if(mint>0)
                     {
                          mint=0;
                          hourt=hourt+1;
                     }
                else
                     {
                          mint=mint;
                          hourt=hourt;
                     }


                //rounding part and costing part
                if(hourt>2)
                     {
                          hourt=hourt-2;
                          cost=hourt*2.5;
                          cost=cost+4;
                          hourt=hourt+2;
                     }

                else
                     {
                          cost=hourt*2;
                     }


                break;


        case 3://bus

                //calculating total time
                if(minout<minin)
                     {
                          hourout=hourout-1;
                          minout=minout+60;
                          hourt=hourout-hourin;
                          mint=minout-minin;
                          hourout=hourout+1;
                          minout=minout-60;
                     }

                else
                     {
                          hourt=hourout-hourin;
                          mint=minout-minin;
                     }


                if(mint>0)
                     {
                          mint=0;
                          hourt=hourt+1;
                     }
                else
                     {
                          mint=mint;
                          hourt=hourt;
                     }


                //rounding part and costing part
                if(hourt>1)
                     {
                          hourt=hourt-1;
                          cost=hourt*3.7;
                          cost=cost+2.5;
                          hourt=hourt+1;
                     }

                else
                     {
                          cost=hourt*2.5;
                     }


                break;
        }

printf("Type of vehicle: %d\n", class);
printf("TIME-IN \t%d : %d\n", hourin, minin);
printf("TIME-OUT\t%d : %d\n",hourout,minout);
printf("ROUNDED PARKING TIME %d hours\n", hourt);
printf("TOTAL CHARGES $%.2f\n", cost);
puts("Press 1 to continue:\n");
scanf("%d", &AAA);
        }
    while(AAA==1);

return 0;
}


