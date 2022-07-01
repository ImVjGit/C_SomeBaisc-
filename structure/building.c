#include<stdio.h>
#include<string.h>

struct building
{
int flatno;
char owner[10];
int parking;
int rent;
};


void main()
{
    struct building b1;
    struct building b2;
    struct building b3;
    
    //asking user
printf("enter the flat no : ");
scanf("%d",&b1.flatno);
printf("enter the owner name  : ");
scanf("%s",&b1.owner);
printf("parking have  : ");
scanf("%d",&b1.parking);
printf("what is rent of this : ");
scanf("%d",&b1.rent);
    
    //flatno
    b2.flatno= 201;
    b3.flatno= 301;
    printf("\nflat no : %d",b1.flatno);
    printf("\nflat no : %d",b2.flatno);
    printf("\nflat no : %d",b3.flatno);
    
    //owner name
    strcpy(b2.owner,"tani");
    strcpy(b3.owner,"ishila");
    printf("\n owner is  %s",b1.owner);
    printf("\n owner is  %s",b2.owner);
    printf("\n owner is  %s",b3.owner);

    //parking have
    b2.parking= 2;
    b3.parking= 3;
    printf("\nparking no : %d",b1.parking);
    printf("\nparking no: %d",b2.parking);
    printf("\nparking no: %d",b3.parking);
    
    //rent

    b2.rent= 2000;
    b3.rent= 3000;
    printf("\nrent : %d",b1.rent);
    printf("\nrent: %d",b2.rent);
    printf("\nrent: %d",b3.rent);
}