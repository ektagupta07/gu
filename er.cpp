#include <stdio.h>

#include<conio.h>

void main()

{ 

 char a[90],n,i;
 printf("enter no");
 scanf("%d", &n);
printf("enter array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
printf("%d%d\n",a[i],i);
}

getch();

}