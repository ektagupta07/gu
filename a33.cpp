#include<conio.h>
#include<stdio.h>
void main()
{
int l,i;
char sa[100];
printf("enter string");
scanf("%s",sa);
l=strlen(sa);

char arr[90],top=-1;
i=0;
while(sa[i]!='\0')
{top++;
    arr[top]=sa[i];

    i++;
}

for(i=0;i<l;i++)
{
    if(sa[i]!=arr[top])
        break;
        top--;
}
if(i==l)
    printf("YES plaidrome ");
else
    printf("NOT a palidrome");
}