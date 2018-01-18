#include<stdio.h>
#include<conio.h>
void main()

{
int i,sum=0,n[90],k,m;

printf("enter no");

scanf("%d",&m);
printf("enter array");
for(i=1;i<=m;i++)

scanf("%d",&n[i]);

printf("enter integer");

scanf("%d",&k);

for(i=1;i<=k;i++)

{
sum=sum+n[i];

}

printf("%d",sum);
getch();
}

