#include <stdio.h>

int main(void)
{
   printf("9/7=%d\n",9/7);
   printf("9%%7=%d\n",9%7);
   printf("-9/7=%d\n",(-9)/7);
   printf("-9%%7=%d\n",(-9)%7);
   printf("9/-7=%d\n",9/(-7));
   printf("9%%-7=%d\n",9%(-7));
   printf("-9/-7=%d\n",(-9)/(-7));
   printf("-9%%-7=%d\n",(-9)%(-7));

   printf("remainder always have same sign with numerator.\n");
   printf("value of division satisfies x = y*value_of_divition + remainder");

   return 0;
}