#include<stdio.h>
#include<string.h>
struct school
{
    int intake;
    int rollno;
    char name[10];
    char subject[10];
};

void main()
{
    struct school s1;
    struct school s2;
    struct school s3;

    //user enter value 
    printf("Enter the intake of class :  ");
    scanf("%d",&s1.intake);
    printf("Enter the roll number of student :  ");
    scanf("%d",&s1.rollno);
    printf("Enter the name :  ");
    scanf("%s",&s1.name);
    printf("Enter the essay  subject :  ");
    scanf("%s",&s1.subject);
    
    //intake
    s2.intake=60;
    s3.intake=80;
    printf("\nintake is : %d",s1.intake);
    printf("\nintake is : %d",s2.intake);
    printf("\nintake is : %d",s3.intake);    
    
    //rollno
    s2.rollno=1;
    s3.rollno=2;
    printf("\nroll number is : %d ",s1.rollno);
    printf("\nroll number is : %d ",s2.rollno);
    printf("\nroll number is : %d ",s3.rollno);   

    //name
    strcpy(s2.name,"omkar");
    strcpy(s3.name,"kartik");
    printf("\nname is %s ",s1.name);
    printf("\nname is %s ",s2.name);
    printf("\nname is %s ",s3.name);   
    
    
    //subject
    strcpy(s2.subject,"Biology");
    strcpy(s3.subject,"Mathmatics");
    printf("\nesay subject is %s ",s1.subject);
    printf("\nesay subject is %s ",s2.subject);
    printf("\nesay subject is %s ",s3.subject);   


}