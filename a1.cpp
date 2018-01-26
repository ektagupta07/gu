#include<stdio.h>
#include<conio.h>
void main()
{

int n,m,n1,m1,h;

printf("Enter first hour\n" );
scanf("%d",&n);
printf("enter first minute\n");
scanf("%d\n",&n1);
printf("enter second hour\n");
scanf("%d",&m);
printf("enter second minute\n");
scanf("%d",&m1);
if(n>=m&&n1>=m1)
{
h=n-m;
m=n1-m1;
printf("hour=%d,minute=%d",h,m);
}
else
printf("time is wrong");
getch();
}