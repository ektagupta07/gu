#include<stdio.h>
#include<conio.h>
void main()
{
    int a,n,d,s;
printf("enter no ");
scanf("%d%d%d",&n,&a,&d);
s=(n/2)*(2*a+(n-1)*d);
printf("%d ",s);
getch();
}