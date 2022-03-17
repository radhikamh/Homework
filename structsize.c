#include<stdio.h>
#include<string.h>

struct employee
{
  int id;
  char name[50];
  }e1;

int main()
{
  e1.id = 101;
  strcmp(e1.name,"Sonoo Jaiswal");

  printf("%d\n",sizeof(struct employee));
  return 0;
  }
