#include<stdio.h>
void read(arr,n);
void insert(arr,n);
void print(arr,n);

int main()
{
  int n,arr[10];
  printf("Enter the size of array:\n");
  scanf("%d",&n);
  read(arr,n);
  insert(arr,n);
  display(arr,n);
  return 0;
  }

void read(int arr[10],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    }
  return 0;
}

void print(int arr[10],int n)
{
   int i;
   for(i=0;i<n;i++)
   {
     printf("%d\t",arr[i]);
     }
}

void insert(int arr[10],int n)
{
   int pos,i,value;
   scanf("%d",&pos);
   scanf("%d",&value);

   for(i=0;i<pos;i++)
   {
     if(pos==i)
     {
       arr[i+1]=arr[i];
       arr[pos-1]=value;
       //n+;
       }
    }
}

void display(int arr[10],int n)
{
    int j;
   for(j=0;j<n;j++)
   {
     printf("%d\t",arr[j]);
     }
    return 0;
}

