#include<conio.h>
void main()
{
char s[90],ch;
int i,l,c=0,max=0,j;
printf("enter string");
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
for(j=0;j<l;j++)

{
if(i!=j&&s[i]==s[j])
{
c++;
if(c>max)
{
max=c;
ch=s[i];
}
}
}
}
printf("%c",ch);
}
