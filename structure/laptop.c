#include<stdio.h>
#include<string.h>
struct laptop
{
    char color[10];
    int ram;
    int weight;
    int price;
};

void main()
{
    struct laptop l1;
    struct laptop l2;
    struct laptop l3;
    strcpy(l1.color,"1 = red");
    strcpy(l2.color,"2 = yellow");
    printf("\ncolor is %s ",l1.color);
    printf("\ncolor is : %s ",l2.color);
    printf("\ncolor is : ");
    scanf("%s",&l3.color);
        printf("\ncolor is : %s ",l3.color);
    
    l1.price=25000;
    l2.price=35000;
    printf("\nprice 1 is %d",l1.price);
    printf("\nprice 2 is %d ",l2.price);
    printf("\nprice 3 is ");
    scanf("%d",&l3.price);
    printf("\nprice 3 is %d ",l3.price);
}