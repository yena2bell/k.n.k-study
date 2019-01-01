#include <stdio.h>

int main(void)
{
   int i,j,k;

//1-(a)
   i=5; j=3;
   printf("%d %d\n", i/j, i%j);
//1-(b)
   i=2; j=3;
   printf("%d\n", (i+10) % j);
//1=(c)
   i = 7; j = 8; k = 9;
   printf("%d\n", (i+10) % k/ j);
//1-(d)
   i =1; j =2; k =3;
   printf("%d\n", (i+5) % (j+2) / k);


//counter example of 2.
   i=5; j=10;
   printf("(-5)/10 = %d, -(5/10) = %d\n",(-i)/j, -(i/j));

//9-(a)
   i = 7; j = 8;
   i *= j+1;
   printf("%d %d\n", i,j);
//9-(b)
   i =j = k = 1;
   i += j += k;
   printf("%d %d %d\n", i, j, k);
//9-(c)
   i = 1; j= 2; k = 3;
   i -= j -= k;
   printf("%d %d %d\n", i,j,k);
//9-(d)
   i=2; j= 1; k= 0;
   i *= j*= k;
   printf("%d %d %d\n", i, j, k);

//10-a
   i=6;
   j = i += i;
   printf("%d %d\n",i,j);
//10-b
   i = 5;
   j = (i -= 2) +1;
   printf("%d %d\n", i, j);
//10-c
   i=7;
   j=6+(i=2.5);
   printf("%d %d\n", i,j);
//10-d
   i =2; j =8;
   j = (i=6) + (j=3);
   printf("%d %d\n", i,j);

//11-a
   i = 1;
   printf("%d\n", i++ - 1);
   printf("%d\n", i);
//11-b
   i=10; j =5;
   printf("%d\n",i++ - ++j);
   printf("%d %d\n", i,j);
//11-c
   i = 7; j = 8;
   printf("%d\n", i++ - -- j);
   printf("%d %d\n", i, j);
//11-d
   i=3; j =4; k = 5;
   printf("%d ",i++ - j++ + --k);
   printf("%d %d %d\n", i, j, k);

   return 0;
}