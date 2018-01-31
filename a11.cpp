#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c,l,r;
printf("enter first value");
scanf("%d", &l);
printf("enter second value");
scanf("%d",&r);
for(n=l;n<=r;n++)
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