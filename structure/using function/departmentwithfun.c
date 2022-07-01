#include<stdio.h>
#include<string.h>
struct department
{
    char name[10];
    
};
struct department department_name(struct department );
void main()
{
    struct department d1;
     d1=department_name(d1);
     printf("Department Name is %s",d1); 
}

struct department department_name(struct department d1)
{
  printf("\n enter the department name  : ");
    scanf("%s",&d1.name);
    return d1;
   
}