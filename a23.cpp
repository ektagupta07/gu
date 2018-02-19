#include<conio.h>
#include<stdio.h>
void main()
{
int i ,l,r;
printf("enter no");
scanf("%d%d",&l,&r);
for(i=1;i<1000;i++)
{
if(i%l==0&&i%r==0)
{
printf("%d",i);
break;
}
}
}
