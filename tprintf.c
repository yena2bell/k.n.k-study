#include <stdio.h>

int main(void)
{
   int i;
   float x;

   i = 40;
   x = 839.23f;

   printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i);
   printf("|%10.3f|%12.3e|%-10g|\n",x,x,x);

   return 0;
}