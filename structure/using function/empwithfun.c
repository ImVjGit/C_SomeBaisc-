#include<stdio.h>
#include<string.h>
struct emp
{
  char name[10];
};
struct emp name(struct emp);
void main()
{
    struct emp e1;
    e1=name(e1);
    printf("\n employee name is : %s",e1);
}

 struct emp name(struct emp e1)
 {
    printf("\n emp name enter here :  ");
    scanf("%s",&e1.name);
    return e1;
 } 
  
        
        
   

