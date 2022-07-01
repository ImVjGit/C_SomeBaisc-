#include<stdio.h>
#include<string.h>
typedef struct page
{
char name[20];
int age;
char gender[20];
char pass[20];
}page;

void login(page*);

void signup(page* );
void main()
{
    page p1;
    signup(&p1);
    login(&p1);

}

void signup(page* p1)
{
printf("\n*****************signup*****************");
printf("\nenter the name : ");
scanf("%s",&p1->name);
printf("\nenter the age: ");
scanf("%d",&p1->age);
printf("\nenter the gender: ");
scanf("%s",&p1->gender);
printf("\nenter the password : ");
scanf("%s",&p1->pass);
printf("\n****************************************");
}

 
void login(page* p1)
{   
    char n[20];
    char p[20];

    printf("\n");
    printf("\n***********************************************");
    printf("\nUser Name :  ");
    scanf("%s",&n);
    printf("\nPassword :  ");
    scanf("%s",&p);
    if(strcmp(n,p1->name))
    {
        printf("\ninvalid username ");
        
    
    }else
    {
        if(strcmp(p,p1->pass))
        {
             printf("\n****************************************");
            printf("\n****************************************");
            printf("\ninvalid password and username ");
             printf("\n****************************************");
            printf("\n****************************************");
        }else{
            printf("\n****************************************");
            printf("\n****************************************");
            printf("\nlogin Successful");
           printf("\n****************************************");
           printf("\n****************************************");
            printf("\n Name :%s ",p1->name);
            printf("\n Age :%d ",p1->age);
            printf("\n Gender :%s ",p1->gender);
    
    printf("\n***********************************************");
        }
        
    }


}
