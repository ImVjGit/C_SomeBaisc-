//1 write a program to perform the following operation on string(using user defined functions)
//	1 Length of string 
//	2 Compare two string
//	3 Copy one string into another
//	4 join two string into one
//	5 reverse the given string
//	6 check is the string is present in another string
//	7 convert the given string into upper case and lower case.

#include<stdio.h>
#include<string.h>

void getlength(char*);
void comparestring(char*,char*);
void copyonetodiff(char*,char*);
void joinstring(char*,char*);
void reverse(char*);
void check(char*,char*);
void convertUandL(char*);
void main()
{
    int ch;
    printf("\n  Menu  \n 1 Length of string \n 2 Compare two string \n 3 Copy one string into another \n 4 join two string into one \n 5 reverse the given string \n 6 check is the string is present in another string \n 7 convert the given string into upper case and lower case. \n choose any one :    ");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("\n  Length of string   " );
        char str[20];
        printf("\n  enter the string here:  " );
        scanf("%s",str);
        printf("Your name is %s", str);
        getlength(str);

    }else{
        if (ch==2)
        {
            printf("\n Compare two string ");
            char str[20] ,strt[20];
            printf("\n  enter 1st  string here:  " );
            scanf("%s",str);
            printf("\n  enter 2nd string here:  " );
            scanf("%s",strt);
            //printf("Your name is %s", str);
            comparestring(str,strt);
        }else{
            if(ch==3)
            {

                printf("\n Copy one string into another");
                printf("\n Compare two string ");
            char str[20] ,strt[20];
            printf("\n  enter 1st  string here:  " );
            scanf("%s",str);
            printf("\n  enter 2nd string here:  " );
            scanf("%s",strt);
                copyonetodiff(str,strt);
            
            }else{
                if(ch==4)
                {
                    printf("\n join two string into one");
                    
            char str[50] ,strt[50];
            printf("\n  enter 1st  string here:  " );
            scanf("%s",str);
            printf("\n  enter 2nd string here:  " );
            scanf("%s",strt);
                    joinstring(str,strt);
                }else{
                    if(ch==5)
                    {
                        printf("\n reverse the given string");
                        char str[20];
        printf("\n  enter the string here:  " );
        scanf("%s",str);
                        reverse(str);
                    }else{
                        if(ch==6)
                        {
                            printf("\n check is the string is present in another string");
                            char str[20] ,strt[20];
            printf("\n  enter 1st  string here:  " );
            scanf("%s",str);
            printf("\n  enter 2nd string here:  " );
            scanf("%s",strt);
                           check(str,strt);
                        }else{
                            if (ch==7)
                            {
                                printf("\n convert the given string into upper case and lower case");
                                char str[20];
                                  printf("\n  enter the string here:  " );
                                scanf("%s",str);
                                convertUandL(str);
                            }else{
                                printf("invalid option");
                            }
                            
                        }
                    }
                }
            }
        }
        
    }

}

void getlength(char* str)
{   
    int p;
    p = strlen(str);
    printf("Length of string  is %d.",p);
}

void comparestring(char* str ,char*strt)
{ int result;
    result = strcmp(str, strt);
    printf("\n if string is equal then give 0 otherwise 1");
  printf("strcmp(str, strt) = %d\n", result);
}

void copyonetodiff(char* str ,char* strt)
{ 
    printf("\n 1 string is %s",str);
     printf("\n 2 string is %s",strt);
    strcpy(strt, str);
    printf("\n 2 string now :  %s",strt);
}

void joinstring(char* str,char*strt)
{
     strcat(str, strt);
      printf("\n 1 string is %s",str);
       printf("\n 2 string is %s",strt);
}

void reverse(char* str )
{
strrev(str);
printf("now reverse string is %s",str);
}

void check(char* str ,char*strt)
{
char* result;
 result=strstr(str,strt);
printf("The substring starting from the given string: %s", result);
}

void convertUandL(char* str)
{
strlwr(str);
    printf("\n string is lowercase %s",str);
    strupr(str);
    printf("\n string is uppercase %s",str);
}











