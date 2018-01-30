#include<stdio.h>
#include<string.h>
void main()
{
char str[90];
int i,n;
printf("enter string ");
gets(str);
n=strlen(str);
for(i=0;i<n;i++)
{
if(tolower(str[0]))
{
str[0]=toupper(str[0]);
}
if(str[i]==' ')
{
str[i+1]=toupper(str[i+1]);
}

}
printf("%s",str);

}


























