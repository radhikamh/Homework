#include<stdio.h>

int main()
{
   int *pnum1,*pnum2,*pnum3,num1,num2,num3;
   pnum1 = &num1;
   pnum2 = &num2;
   pnum3 = &num3;
   printf("Enter the numbers:\n");
   scanf("%d%d",&num1,&num2);
   add(pnum1,pnum2,pnum3);
   printf("Sum of two numbers: %d\n",num3);
}

int add(int *a,int *b,int*c)
{
   *c = *a + *b;
   }
