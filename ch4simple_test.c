#include <stdio.h>

int main(void)
{
   int i=1;

   printf("i is 1 and, ++i-- is %d\n", ++i--);
/* it seems that ++ and -- can't be used to same variable simultaneously.*/
   printf("then i becomes %d", i);

   return 0;
}