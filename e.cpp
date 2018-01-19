
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c;
for(n=2;n<=100;n++)
{c=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
c++;
break;
}
}

if(c==0 && n!=0)
printf("%d ",n);
getch();

}
}