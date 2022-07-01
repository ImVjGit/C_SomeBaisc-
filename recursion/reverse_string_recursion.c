#include<stdio.h>
#include<string.h>
void reverse(char *);
void main()
{
    char str[20];
   printf("Enter the String here: ");
   scanf("%s",str);
    reverse(str);

}

void reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}