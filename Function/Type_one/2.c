//2 Finding area and perimeter of rectangle or circle.
#include<stdio.h>
void rectangle();
void circle();
void main()
{
 int a;
 printf("Finding area and perimeter : \n 1 Rectangle \n 2 Cricle \n choose any one ");
 scanf("%d",&a);
 if(a==1)
 {
 rectangle();
 }
 if(a==2){
 circle();
 }
 else {
 printf("!!!!invalid option!!!!\n");
 }
}
void rectangle()
{
int l;
int w;
int area;
int p;
printf("Enter the length of rectangle : ");
scanf("%d",&l);
printf("Enter the width of the rectangle: ");
scanf("%d",&w);
area = l * w ;
printf("Area of rectangle is : %d",area);
printf("\n");
p = 2 * (l + w ) ;
printf("perimeter of rectangle is : %d ",p);
printf("\n");
}
void circle()
{
int r ;
int area ;
int perimeter ;
int pai = 22/7;
printf("enter the radius of circle : ");
scanf("%d",&r);
area = pai * (r * r);
printf("area of circle is : %d",area);
printf("\n");
perimeter = 2 * pai * r ;
printf("Perimeter of circle is : %d",perimeter);
printf("\n");
}
