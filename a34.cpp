#include<stdio.h>
#include<conio.h>
void main()
{
char n ,a[90];
int i,j,k,l;
printf("enter arrray element");
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i++)
{
for(j=0;j<l;j++)
{
    for(k=0;k<l;k++)
{
    if(i!=j&&j!=k&&k!=i)

    
    printf("%c%c%c\n",a[i],a[j],a[k]);
    
}
}
}
}
