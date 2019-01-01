#include <stdio.h>

int main(void)
{
   int i,j;

   printf("Enter a three-digit number: ");
   scanf("%d", &i);

   j = (i/100)+ i%100/10*10 + i%10*100;

   printf("The reversal is: %d",j);

   return 0;
}