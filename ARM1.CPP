#include <stdio.h>
#include<conio.h>
void  main()
{
    int t,s,r,n;
    for(n=1;n<=1000;n++)
    {
    t=n;
    s=0;
while(t!=0)
{
    r=t%10;
    s=s+(r*r*r);
    t=t/10;

}
    if(s==n)
    {
        printf("%d  ",n);
        getch();
}

}
}