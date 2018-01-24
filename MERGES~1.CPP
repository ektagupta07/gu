#include<stdio.h>
#include<conio.h>
void merge(int x,int mid,int y);
int a[20],b[20];
void msort(int x,int y)
{
   int mid;
   if(x<y)
   {
      mid=(x+y)/2;
      msort(x,mid);
      msort(mid+1,y);
      merge(x,mid,y);
   }
}
void merge(int x,int mid,int y)
{
   int l1, l2, i;
   for(l1=x,l2=mid+1,i=x;l1<=mid&&l2<=y;i++)
   {
      if(a[l1]<=a[l2])
	 b[i]=a[l1++];
      else
	 b[i]=a[l2++];
   }
    while(l1<=mid)
      b[i++]=a[l1++];
    while(l2<=y)
      b[i++]=a[l2++];
    for(i=x;i<=y;i++)
      a[i]=b[i];
}
void main()
{
	 int n,i;
	 printf("Enter the size of array\n");
	 scanf("%d",&n);
	 printf("Enter the elements in array\n");
	 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 msort(0,n-1);
	 printf("Sorted array is:\n");
	 for(i=0;i<n;i++)
	 printf("%d ",a[i]);
	 getch();

}
