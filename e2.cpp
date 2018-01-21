#include<stdio.h>
#include<conio>
void main ()
{
int i,f=1,n;
printf("enter no");
scanf("%d",&n);
for(i=1;i<=5;i++)
{
f=n*i;
printf("%d ",f);
getch();
}


}