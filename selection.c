#include<stdio.h>

void selection(int a[50],int n)
{
int k,i,j,min,pos,temp;
for(i=0;i<n;i++)
{
 min=a[i];
 pos=i;
 for(j=i+1;j<n;j++)
  {
   if(a[j]<min)
    {
      pos=j;
    }
   }
temp=a[i];
a[i]=a[pos];
a[pos]=temp;
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
 selection(a,n);
}
