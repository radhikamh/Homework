#include<stdio.h>
#include<string.h>

struct employee
{
   char name[50];
   int id;
  };
void function(struct employee record);

int main()
{
   struct employee record;

   record.id = 50;
   strcpy(record.name, "RAM");
   function(record);
   return 0;
}

void function(struct employee record)
{
    printf("employee id: %d\n",record.id);
    printf("employee name: %s\n",record.name);
    return 0;
}




