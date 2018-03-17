#include<stdio.h>
#include<conio.h>
void main ()
{
int n ,a[90],i,j,m,b[90],c=0;
printf("enter the no");
scanf("%d%d",&n,&m);
printf("enter alement");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter alement");
for(j=0;j<m;j++)
scanf("%d",&b[j]);
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{

if(a[i]==b[j])
{
    c++;
    
}
}
}
if(c==m)
{
printf("yes ");
}
else
{
printf("no ");
   
}
}

