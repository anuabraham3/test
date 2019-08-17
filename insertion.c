#include<stdio.h>
void insertion(int a[50],int n)
{
int i,k;
    for(i=1;i<n;i++)
	{
		
		int h=i;
		int element=a[i];
		while(h>0 & a[h-1]>element)
		{
		 a[h]=a[h-1];
		 h=h-1;
		}
		a[h]=element;
         }
printf("the sorted array is:\n");
for(k=0;k<n;k++)
{ printf("%d ",a[k]);}

}



int main()
{
 int n,i,a[50] ;
 printf("enter the number of elements");
 scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
 insertion(a,n);
}
