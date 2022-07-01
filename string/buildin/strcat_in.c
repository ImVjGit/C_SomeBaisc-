#include<stdio.h>
#include<string.h>
void main()
{

   char s[30], d[30];

   strcpy(s,  " Hello");
   strcpy(d, "welcome");

   strcat(d,s);

   printf("Now  string : %s", d);
}
