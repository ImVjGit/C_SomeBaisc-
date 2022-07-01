#include<stdio.h>
#include<string.h>

struct form
{
    char name[10];
    char sirname[10];
    int age;
    char gender[7];
};

void main()
{
struct form f1;
struct form f2;
struct form f3;

//user enter
printf("\n enter the name : ");
scanf("%s",&f1.name);
printf("\n enter the sirname : ");
scanf("%s",&f1.sirname);
printf("\n enter the age : ");
scanf("%d",&f1.age);
printf("\nenter the gender: ");
scanf("%s",&f1.gender);

//name
strcpy(f2.name,"tanika");
strcpy(f3.name,"karishma");
printf("\n name is %s ",f1.name);
printf("\n name is %s ",f2.name);
printf("\n name is %s ",f3.name);

//sirname
strcpy(f2.sirname,"jadhav");
strcpy(f3.sirname,"pawar");
printf("\n sirname is %s ",f1.sirname);
printf("\n sirname is %s ",f2.sirname);
printf("\n sirname is %s ",f3.sirname);

//age
f2.age=15;
f3.age=20;
printf("\n age is %d ",f1.age);
printf("\n age is %d ",f2.age);
printf("\n age is %d ",f3.age);

//gender    
strcpy(f2.gender,"female");
strcpy(f3.gender,"female");
printf("\n gender is %s ",f1.gender);
printf("\n gender is %s ",f2.gender);
printf("\n gender is %s ",f3.gender);
}