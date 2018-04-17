#include <stdio.h>
#include<string.h>
int main()
{
char a[100],b[100],l,l1,i,max;
	printf("enter the first string\n");
	scanf("%s",a);
	printf("enter the second string\n");
	scanf("%s",b);
	l=strlen(a);
	l1=strlen(b);
	if(l>l1)
	{
		max=l;
	}
	else
	{
		max=l1;
	}
for(i=0;i<max;i++)
{
    
        if(a[i]==b[i])
        {
            printf("%c",a[i]);
        }
            else
            {
            break;
        }
    
    
}
}
