#include<conio.h>
#include<stdio.h>
void main()
{
int n,i,c=0;
printf("enter no");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
c++;
break;
}
}
if(c==0&&n!=0)
printf("prime");
else
printf("not prime");
getch();
}


