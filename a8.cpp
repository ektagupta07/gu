#include<stdio.h>
#include<string.h>
void main()
{
char a[90];
int result=0,res,i,b[90],n;
printf("enter string ");
scanf("%s",&a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]=='I')
b[i]=1;
else 
if(a[i]=='V')
b[i]=5;
else 
if(a[i]=='X')
b[i]=10;
else
if(a[i]=='L')
b[i]=50;
else
if(a[i]=='C')
b[i]=100;
else
if(a[i]=='D')
b[i]=500;
else
if(a[i]=='M')
b[i]=1000;
}
for(i=0;i<n;i=i+2)
{
if(b[i]<b[i+1])
{
res=b[i+1]-b[i];
}
else
{
res=b[i+1]+b[i];
}
result=res+result;
}

printf("%d",result);
}



res=b[i+1]-b[i];
}
else
{
res=b[i+1]+b[i];
}
result=res+result;
}

printf("%d",result);
}


