#include<stdio.h>
#include<string.h>

typedef struct student
{
  int id;
  char name[20];
  float percentage;
  }S1;


int main()
{
    S1 *b,p[100];
    b = &p;
    int n;
    printf("Enter the number of students:\n");
    scanf("%d",&n);
    read(b,n);
    display(b,n);
    return 0;
}

void read(S1 *b,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d%s%f",&b->id,b->name,&b->percentage);
    }
}

void display(S1 *b,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d student id:%d\n",i+1,b->id);
        printf("%d student name:%s\n",i+1,b->name);
        printf("%d student percentage:%f\n",i+1,b->percentage);
    }
}
