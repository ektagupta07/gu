#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,m;
printf("enter no");
scanf("%d",&m);
printf("enter no");
scanf("%d",&n);
for(i=m+1;i<n;i++)
{
if(i%2!=0)
{
printf("%d ",i);
}

getch();
}
}