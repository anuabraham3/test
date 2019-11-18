#include<stdio.h>

int recurbinary(int a[50],int n,int b,int beg,int las)
{
 int mid=(beg+las)/2 ;
 if(b==a[mid])
  { return mid;}
 else if(b<a[mid])
  {  recurbinary(a,n,b,beg,mid-1);}
 else
  { recurbinary(a,n,b,mid+1,las); }
}
int main()
{
 int i,a[50],n,b,s;
 int temp,l,m,k,beg,las;
 printf("enter the number of elements");
 scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
 printf("Enter the element to be searched");
 scanf("%d",&b);

 for(l=0;l<n;l++)
 {
  for(m=0;m<n-1-l;m++)
   {
     if (a[m]>a[m+1])
      {
        temp=a[m];
        a[m]=a[m+1];
        a[m+1]=temp;
      }
    }
  } 
 printf("\nThe sorted array is:");
 for(k=0;k<n;k++)
 { printf("%d",a[k]); }
beg=0;
las=n-1;
s=recurbinary(a,n,b,beg,las);
printf("element found at position %d",s+1);
}
