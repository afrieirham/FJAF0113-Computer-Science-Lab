#include <stdio.h>
#include <math.h>

int main (void)

{
     char option;
     printf("Enter your observation\n");
     scanf("%c", &option);
     switch (option)

          {
               default : puts("Content X");
               break;
               case 'r' :
               case 'R' : puts("Ammonia");
               break;
               case 'b' :
               case 'B' : puts("Carbon Monoxide");
               break;
               case 'g' :
               case 'G' : puts("Hydrogen");
               break;
               case 'w' :
               case 'W' : puts("Oxygen");
               break;

          }

}
