#include<stdio.h>
#include<string.h>
void main()
{
char str[90],i,n,temp;
printf("enter string ");
scanf("%s",&str);
n=strlen(str);
for(i=0;i<n;i+=2)
{
temp=str[i];
str[i]=str[i+1];
str[i+1]=temp;

}

printf("%s",str);
}

