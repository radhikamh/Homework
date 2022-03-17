#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n1,n2,*p,*q,b,*r;
  printf("Enter two numbers:\n");
  p = &n1;
  q = &n2;
  r = &b;
  scanf("%d%d",&n1,&n2);
  big(p,q,r);
  if(*r==1)
  {
     printf("%d is greater than %d\n",*q,*p);
  }
  return 0;
}

int big(int *a,int *b,int *c)
{
   *c = 1;
   if(*a > *b)
   {
      *c = 0;
      }
}
