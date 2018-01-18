#include<stdio.h>
#include<conio.h>
void main()

{
int r,n,temp,sum=0;

printf("enter no");
scanf("%d",&n);
temp=n;
while(n!=0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
if(sum==temp)
{
printf("palidrome");
}
else
{
printf("not palidrome");
}
getch();
}