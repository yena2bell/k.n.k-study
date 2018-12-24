//chapter2 Programming Projects 2.
//modified by Programming Project 2.

#include <stdio.h>

//#define RADIUS 10
#define PI 3.1415f

int main(void)
{
   int r; //= RADIUS;
   float v;

   printf("Enter radius of the sphere: ");
   scanf("%d",&r);

   v = (4.0f/3.0f)*PI*r*r*r;

   printf("the volume of sphere is %.3f",v);

   return 0;
}