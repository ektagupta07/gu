#include<conio.h>
#include<string.h>
void main()
{
char s[90];
int i,l;
printf("enter string");
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
s[i]=s[i]+3;
printf("%c",s[i]);
}
}