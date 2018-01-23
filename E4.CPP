#include<stdio.h>
#include<conio.h>
void main()
{
    int i, a[90],n,max;
printf("enter no ");
scanf("%d",&n);
printf("enter array");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
 max=a[0];
for(i=1;i<=n;i++)
{
if(a[i]>max)
max=a[i];
}
printf("%d ",max);
getch();
}