#include<stdio.h>
#include<string.h>

struct shop
{
    int shopno;
    char shopname[20];
    char shopowner[20];
};


void main()
{
    struct shop s1;
    struct shop s2;
    struct shop s3;


    //user enter
    printf("Enetr the shop number here: ");
    scanf("%d",&s1.shopno);
    printf("Enetr the shop name here: ");
    scanf("%s",&s1.shopname);
    printf("Enetr the shop owner name  here: ");
    scanf("%s",&s1.shopowner);

    //shop number
    s2.shopno=264;
    s3.shopno=561;
    printf("\nshop number is : %d",s1.shopno);
    printf("\nshop number is : %d",s2.shopno);
    printf("\nshop number is : %d",s3.shopno);
    
    
    
    //show name
    strcpy(s2.shopname,"electornic");
    strcpy(s3.shopname,"Kirana store");
    printf("\nshop name is : %s",s1.shopname);
    printf("\nshop name is : %s",s2.shopname);
    printf("\nshop name is : %s",s3.shopname);

    
    //owner
    strcpy(s2.shopowner,"champklala gada");
    strcpy(s3.shopowner,"jetha bhai ");
    printf("\nshop owner is : %s",s1.shopowner);
    printf("\nshop owner is : %s",s2.shopowner);
    printf("\nshop owner is : %s",s3.shopowner);

}