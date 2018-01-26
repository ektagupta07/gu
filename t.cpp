#include<stdio.h>

#include<conio.h>
void main()
{

  int n,m,h;

  printf("Enter numbers:" );

  scanf("%d",&n);

h=n/60;

m=n%60;

printf("hour=%d,minute=%d",h,m);

 getch();

}