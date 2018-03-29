#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
   float change;
   do
   {
        change = get_float("change owed : ");
   }
   while( change < 0);

   change = round(100*change);

   int coins = 0;
   while (change >= 25)
   {
       change -= 25;
       coins++;
   }
   while (change >= 10)
   {
       change -= 10;
       coins++;
   }
   while (change >= 5)
   {
       change -= 5;
       coins++;
   }
   while (change >= 1)
   {
       change -= 1;
       coins++;
   }
   printf("%d\n", coins);
}

