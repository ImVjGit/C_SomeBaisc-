#include<stdio.h>
#include<string.h>
struct emp
{
  char name[10];
  int id ;
  int salary;
  int dept_id ; 
};

void main()
{
    struct emp e1;
    struct emp e2;
    struct emp e3;

//user enter 
    printf("\n3 emp name enter here :  ");
    scanf("%s",&e3.name);
    printf("\n3 emp id enter here :  ");
    scanf("%d",&e3.id);
    printf("\n3 emp salary  enter here :  ");
    scanf("%d",&e3.salary);
    printf("\n 3 dept id is : ");
    scanf("%d",&e3.dept_id);

//emp name
    strcpy(e1.name,"ram");
    strcpy(e2.name,"raja");
    printf("\nemp 1 name is %s ",e1.name);
    printf("\nemp 2 name is %s",e2.name);
    printf("\nemp 3 name is %s",e3.name);

//emp id 
    e1.id=15;
    e2.id=16;
    printf("\n 1 emp id is : %d",e1.id);
    printf("\n 2 emp id is : %d",e2.id);
    printf("\n 3 emp id is : %d",e3.id);

//salary
    e1.salary = 25000;
    e2.salary = 50000;

    printf("\n 1 emp salary is : %d",e1.salary);
    printf("\n 2 emp salary is : %d",e2.salary);    
    printf("\n 3 emp salary is : %d",e3.salary);

//dept_id
    e1.dept_id= 1;
    e2.dept_id=2;
    printf("\n 1 dept id is : %d",e1.dept_id);
    printf("\n 2 dept id is : %d",e2.dept_id);
    printf("\n 3 dept id is : %d",e3.dept_id);
}