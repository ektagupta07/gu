#include <stdio.h>
#include<conio.h>
void main() {
int a[100];
int i,n,k;
printf("enter the elements");
scanf("%d%d",&n,&k);
printf("enter array element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
	if(k==a[i])
	{
		printf("%d",a[i]);
	}
}

}

}