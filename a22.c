#include<stdio.h>
void main()
{
int s[90],ch,i,n,max=1,j;
printf("enter no\n");
scanf("%d",&n);
printf("enter no\n");
for(i=0;i<n;i++)
scanf("%d",&s[i]);

for(i=0;i<n;i++)
{
 int c=0;   
for(j=0;j<n;j++)

{
if(i!=j&&s[i]==s[j])
{
c=c+1;
}
}

if(c==0)
{
printf("%d",s[i]);
}
}
    
}



