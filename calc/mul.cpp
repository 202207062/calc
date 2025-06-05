#include "add.h"

int mul(int x, int y)
{
   int sum = 0;
   int i = 0; 

   for (i = 0; i < y; i++)
   {
       sum = add(sum, x);
   }

   return sum;
}

