#include<stdio.h>
#include<string.h>
struct laptop
{
    char color[10];
    
};

struct laptop color(struct laptop);

void main()
{
    struct laptop l1;
    l1= color(l1);
   printf("color is %s ",l1);
}

struct laptop color(struct laptop l1)
{
    printf("\nlaptop color you want  : ");
    scanf("%s",&l1.color);
    return l1;
}