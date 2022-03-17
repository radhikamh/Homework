#include<stdio.h>
void add(a,b);

int main()
{
  int *p,*q,n1,n2;
  printf("Enter two numbers:\n");
  p = &n1;
  q = &n2;
  scanf("%d%d",&n1,&n2);
  add(p,q);
  return 0;
  }

void add(int *p,int *q)
{
  int sum;
  sum = *p + *q;
  printf("%d\n",sum);
  }

