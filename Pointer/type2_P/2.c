//2 Finding area and perimeter of rectangle or circle.
#include<stdio.h>
int rectangle();
int circle();
int input();
int a_rectangle();
int p_rectangle();
int a_circle();
int p_circle();
void main()
{
int a;
a = input();
printf (":%d\n",a);
}
int input()
{
int a;
printf("Finding area and perimeter : \n 1 Rectangle \n 2 Cricle \n choose any one ");
scanf("%d",&a);
if(a==1)
{
rectangle();
}else{
if(a==2){
circle();
}
else {
printf("!!!!invalid option!!!!\n");
}
}}
int rectangle()
{ int a;
printf(" Rectangle choose any one :\n 1 Perimeter \n 2 Area :\n ");
scanf("%d",&a);
if (a==1)
{
p_rectangle();
}else
{
if(a==2)
{
a_rectangle();
}else
{
printf("invalid option\n");
rectangle();
}
}
}
int a_rectangle()
{
int l;
int w;
int area;
int p;
int o;
printf("Enter the length of rectangle : ");
scanf("%d",&l);
printf("Enter the width of the rectangle: ");
scanf("%d",&w);
area = l * w ;
printf("Area of rectangle is :");
printf("\n");
return area;
}
int p_rectangle ()
{ int l;
int w;
int area;
int p;
printf("Enter the length of rectangle : ");
scanf("%d",&l);
printf("Enter the width of the rectangle: ");
scanf("%d",&w);
p = 2 * (l + w ) ;
printf("perimeter of rectangle is : ");
printf("\n");
return p;
}
int circle()
{ int a;
printf(" Circle choose any one :\n 1 Perimeter \n 2 Area :\n ");
scanf("%d",&a);
if (a==1)
{
p_circle();
}else
{
if(a==2)
{
a_circle();
}else
{
printf("invalid option\n");
circle();
}
}
}
int a_circle()
{ int r
;
int area ;
int pai = 3.14;
printf("enter the radius of circle : ");
scanf("%d",&r);
area = pai * (r * r);
printf("area of circle is :");
return area;
printf("\n");
}
int p_circle()
{ int r
;
int perimeter ;
int pai = 22/7;
printf("enter the radius of circle : ");
scanf("%d",&r);
perimeter = 2 * pai * r ;
printf("Perimeter of circle is : ");
return perimeter;
}