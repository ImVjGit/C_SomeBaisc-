//2. Finding area and perimeter of rectangle or circle.
#include<stdio.h>
int rectangle(int,int);
int circle(int);
void main()
{
int a;
int l;
int w,r;
int ansA,ansB;
printf("Finding area and perimeter : \n 1 Rectangle \n 2 Cricle \n choose any one ");
scanf("%d",&a);
if(a==1)
{
printf("Enter the length of rectangle : ");
scanf("%d",&l);
printf("Enter the width of the rectangle: ");
scanf("%d",&w);
ansA =rectangle(l,w);
printf("perimeter of rectangle is: %d\n",ansA);
}else{
if(a==2){
printf("enter the radius of circle : ");
scanf("%d",&r);
ansB=circle(r);
printf("perimeter of circle is: %d\n",ansB);
}
else {
printf("!!!!invalid option!!!!\n");
}
}
} int rectangle(int l, int w)
{ int area;
int p;
area = l * w ;
printf("Area of rectangle is : %d",area);
printf("\n");
p = 2 * (l + w ) ;
return p;
printf("\n");
}
int circle(int r )
{ int area ;
int perimeter ;
int pai = 22/7;
area = pai * (r * r);
printf("area of circle is : %d",area);
printf("\n");
perimeter = 2 * pai * r ;
return perimeter;
printf("\n");
}