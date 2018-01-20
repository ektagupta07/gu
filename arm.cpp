#include <stdio.h>

#include<conio.h>
void  main()

{
 
   int t,s=0,r,n;
  
  printf("enter no\n");

scanf("%d",&n);

t=n;
while(n!=0)

{

    r=n%10;

    s=s+(r*r*r);

    n=n/10;

}
    if(s==t)
 
   {

        printf("armstrong");

    }
  
      else
 
   {
  
      printf("not armstrong");

    }
getch();

}