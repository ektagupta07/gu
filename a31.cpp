#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[90];
int i,l,n;
printf("enter string");
gets(str);
l=strlen(str);


for(i=l;i>=0;i--)
{
printf("%c",str[i]);
}

if(str==" ")
printf("%c",str[i]);

}