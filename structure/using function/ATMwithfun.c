#include<stdio.h>
#include<string.h>

struct ATM
{
    char cardname[50];
    int cardno;   
    int pin;
};

struct ATM userenter(struct ATM );

void main()
{
    
    struct ATM a1;
    a1 = userenter(a1); 
    printf("\n card name : %s ",a1.cardname);
    printf("\ncard number is %d ",a1.cardno);
    printf("\n pin is %d ",a1.pin);

    }

struct ATM userenter(struct ATM a1)
    {
       a1.cardno=20213456; 
       a1.pin=4728;
        printf("\n enter the card name : ");
        scanf("%s",&a1.cardname);
        return a1;
    
}