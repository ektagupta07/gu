#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char str[90],str1[90];
int i,l,m,c=0;
printf("enter string \n");
scanf("%s%s",&str,&str1);
l=strlen(str);
m=strlen(str1);
if(l==m)
{
for(i=0;i<l;i++)
{
if(str[i]!=str1[i])
{
c++;
}
}

if(c==1)
{
printf("yes");
}
else
{
    printf("not");
}
}
else
{
    printf("not same length");
}
getch();
}
