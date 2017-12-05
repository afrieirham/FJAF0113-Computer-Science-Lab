/*Calculate the product of three integers*/
#include<stdio.h>
int main(void)
{
   int x,y,z,r1,large; //declare vairable
   printf("Enter your three integers:\n");//prompt
   scanf("%d%d%d",&x,&y,&z);//user input
   r1=x*y*z; //multiply values
   printf("The product is %d\n",r1);
{
   if(x==z&&z==y)
   large=x;
   else if (x>y&&x>z)
   large=x;
   else if(y>x&&y>z)
   large=y;
   else
   large=z;
}
{
   if (large%2==0)
   printf("%d is even",large);
   else
   printf("%d is odd",large);
}
   return 0;
}
