#include<stdio.h>
#include<stdlib.h>

int main()
{
   int r,*p;
   float a,*q;
   printf("Enter the radius of circle:\n ");
   p = &r;
   q = &a;
   scanf("%d",&r);
   area(p,q);
   printf("Area of circle is:%0.2f",*q);
   return 0;
}

int area(int *x,float *y)
{
   *y = 3.14 * (*x)*(*x);
   }
