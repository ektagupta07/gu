#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[90],i,l;
printf("enter string");
scanf("%s",&s);
l=strlen(s);
for(i=l-1;i>=0;i--)
{
	if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||s[i]=='u')
	{
		continue;
	}
else

printf("%c",s[i]);

}
}