#include<conio.h>
#include<stdio.h>
void main ()
{
int i,f=1,n;
printf("enter no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("%d",f);
getch();
}