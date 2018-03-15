#include<stdio.h>
#include<conio.h>
void main ()
{
int n ,a[90],i,j;
printf("enter the no");
scanf("%d",&n);
printf("enter alement");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{

if(a[i]+a[j]==0)
{

printf("%d %d \n",a[i],a[j]);
}
}

}
}