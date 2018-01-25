#include <stdio.h>

#include<conio.h>

void main()

{ 
   
 char str;
 
   printf("enter string ");
  
  scanf("%c ", &str);
  
   if (isdigit(str))
 
   printf("digit");
 
   else
 
   printf("not digit");

getch(); 
  
}