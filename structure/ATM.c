#include<stdio.h>
#include<string.h>

struct ATM
{
    char cardname[50];
    int cardnumber;
    int amount;
    int pin;
      
};

void main()
{
    
    struct ATM a1;
    struct ATM a2;
    struct ATM a3;

    //user enter 
    printf("\n enter the card name : ");
    scanf("%s",&a1.cardname);
    printf("\nenter the card number : ");
    scanf("%d",&a1.cardnumber);
    printf("\nenter the amount: ");
    scanf("%d",&a1.amount);
    printf("\n enter the pin");
    scanf("%d",&a1.pin);


    //cardname
    strcpy(a2.cardname,"Ram sethu Vani");
    strcpy(a3.cardname,"govind gopal varma");
    printf("\nname on card is : %s",a1.cardname);
    printf("\nname on card is : %s",a2.cardname);
    printf("\nname on card is : %s",a3.cardname);
    
    
    //cardnumber;
    a2.cardnumber= 789456123;
    a3.cardnumber=456123789;
    printf("\n card number is : %d ",a1.cardnumber);
    printf("\n card number is : %d ",a2.cardnumber);
    printf("\n card number is : %d ",a3.cardnumber);
    
    
    //amount
    a2.amount=8000;
    a3.amount=10000;
    printf("\n Amount is : %d ",a1.amount);
    printf("\n Amount is : %d ",a2.amount);
    printf("\n Amount is : %d ",a3.amount);

    //pin
    a2.pin=1234;
    a3.pin=4431;
    printf("\n pin is : %d ",a1.pin);
    printf("\n pin is : %d ",a2.pin);
    printf("\n pin is : %d ",a3.pin);


}