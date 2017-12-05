#include <stdio.h>
#include <math.h>

#define T1 0.88
#define T2 0.9
#define TAX 1.05

float price, cus, PAD, PT,DIS,tax;

int main (void)

{
   printf ("\nPress \n1. Teacher \n2. Others\n\n");
   scanf("%f", &cus);

   if (cus==1)
      {
         printf("\nEnter the total gross purchase : \t");
         scanf("%f", &price);
         if (price>=100)
            {
               DIS=price*0.12;
               PAD=price*T1;
               tax=PAD*0.05;
               PT=PAD*TAX;
               printf("\n\t Total Purchase \t= RM%.2f \n\t Teacher's Discount(12%%)= RM%.2f \n\t Discounted total \t= RM%.2f \n\t Sales Tax (5%%) \t= RM%.2f \n\t Total \t\t\t= RM%.2f\n", price,DIS,PAD,tax,PT);
            }
         else
            {
               DIS=price*0.1;
               PAD=price*T2;
               tax=PAD*0.05;
               PT=PAD*TAX;
               printf("\n\t Total Purchase \t= RM%.2f \n\t Teacher's Discount(12%%)= RM%.2f \n\t Discounted total \t= RM%.2f \n\t Sales Tax (5%%) \t= RM%.2f \n\t Total \t\t\t= RM%.2f\n", price,DIS,PAD,tax,PT);
            }
      }

   else if (cus==2)
      {
         printf("\nEnter the total gross purchase : \t");
         scanf("%f", &price);
         tax=price*0.05;
         PT=price*TAX;
         printf("\n\t Total Purchase \t= RM%.2f \n\t Sales Tax (5%%) \t= RM%.2f \n\t Total \t\t\t= RM%.2f\n", price,tax,PT);
      }
   else
      printf("\nInvalid Customer\n");
}




