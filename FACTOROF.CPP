#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
int n,i=2;
printf("enter no ");
 scanf("%d",&n);
 while(i<=n)
 {
 if(n%i==0)
 {
 printf("%d  ",i);
 n=n/i;
 continue;
 }
 i=i+1;
 }
 getch();
 }
