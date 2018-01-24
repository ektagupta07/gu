#include<stdio.h>

#include<conio.h>
void main()

{
    

printf("enter no");
 
   scanf("%d",&n);
  
  printf("enter no ");
   
 for(i=1;i<=n;i++)
    
scanf("%d",&a[i]);
    
for(i=1;i<=n;i++)
   
 {
      
  sum=sum+a[i];
 
}
  
  median=sum/n;
 
  printf("%d",median);
getch();

}