#include <stdio.h>
int main()
{
    int a[200],i,j,n;
    
    printf("enter no");
    scanf("%d",&n);
    printf("enter element");
    for(i=0;i<=n;i++)
    
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    
        for(j=1;j<n;j++)
        {
            if(a[i]==a[j])
            
            {
                printf("%d",a[i]);
                exit(0);
            }
         
        } 
    
       
    }
    
    
    

    return 0;
}
