#include<stdio.h>
#include<conio.h>
void main()
{
    int i ,a[90],n;
printf("enter no");
scanf("%d",&n);
printf("enter array element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(i%2!=0&&a[i]%2==0)
{
printf("%d ",a[i]);
}
else
if(i%2==0&&a[i]%2!=0)
{
printf("%d ",a[i]);
}
}
}

