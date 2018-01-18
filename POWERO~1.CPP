#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()

{
int n,p,a;

printf("enter no");
scanf("%d",&n);
printf("enter power");
scanf("%d",&p);
a=pow(n,p);
printf("%d",a);
getch();
}