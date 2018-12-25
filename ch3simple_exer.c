#include <stdio.h>

int main(void)
{
   int i,j;
   float x,y;

   i = 10;
   j = 20;
   x = 43.2892f;
   y = 5527.0f;

   printf("i = %d, j = %d, x = %f, y = %f\n", i,j,x,y);
   printf("does printf function make sound by \a?\n");
   printf("escape sequence can make \"hello!\"");

   printf("%12.5e\n",30.253);
   printf("%-6.2g\n", .0000009979);

//Exercise2
   printf("%-8.1e\n",x);
   printf("%10.6e\n",x);

//Exercise3
   scanf("%d", &i);
   scanf(" %d", &j);
   printf("%d,%d\n",i,j);

   scanf("%f",&x);
   printf("%f\n",x);
   scanf("%f ",&x);
   printf("%f\n",x);

   scanf("%f,%f",&x,&y);
   printf("%f,%f\n",x,y);
   scanf("%f, %f",&x,&y);
   printf("%f,%f",x,y);
   

   return 0;
}