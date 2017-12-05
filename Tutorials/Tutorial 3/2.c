#include <stdio.h>

int main (void)

{
   char name [100], date [100], address [100], food [100],blank [100];

   puts ("Your name ?");
   gets (name);
   puts ("Date of birth ?");
   gets (date);
   puts ("Your house identity");
   gets (address);
   puts ("Lit food ?");
   gets (food);
   puts ("Press Enter");
   gets (blank);
   puts (blank);
   puts (name);
   puts (date);
   puts (address);
   puts (food);

   return 0;
}
