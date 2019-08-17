#include<stdio.h>

void linear(int a[],int n,int b)
{
 int i,f=0;
 for(i=0;i<n;i++)
 {
   if (a[i]==b)
    { f=1; break;}
 }
 if(f==1)
 { printf("element found at position %d",i+1); }
 else 
 { printf("element not found");}  
}

void binary(int a[],int n,int b)
{
 int temp,l,m,k;
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
 int lo=0,up=n-1,i ;
 while(lo<=up)
 {
  int mid=(lo+up)/2 ;
  if(b==a[mid])
   {	printf("element found at position %d",mid+1);
	break; }
  else if(b<a[mid])
   {  up=mid-1 ; }
  else
   {  lo=mid+1; }
 }
}

int main()
{
 int i,a[50],n,b,s,q=0;
 printf("enter the number of elements");
 scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
 printf("Enter the element to be searched");
 scanf("%d",&b);
 printf("enter the choice \n1.Linear search \n 2.Binary search");
 scanf("%d",&s);
 switch(s)
  {
   case 1 :
    linear(a,n,b);
    break;
   case 2 :
     binary(a,n,b);
     break;
   default : printf("no such option") ;
  }
 
}


