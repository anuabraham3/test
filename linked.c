#include<stdio.h>

typedef struct node 
{
int data;
node* ptr;
}newnode;

node* head;
head=NULL;

void insert()
 {
 node *newnode; 
 newnode=(node*)malloc(sizeof(node));
 int pos,x,ct;
 ct=0;

 printf("enter the position and element to be inserted");
 scanf("%d%d",&pos,x);

 if (newnode==NULL)
 {
  printf("insufficient space"); 
  exit(0);
 }
 else
 {
 newnode->data=x;
 temp=head;
 while(temp->link!=NULL)
 {
  temp=temp->link;
  ct++;
 }
 if(pos>ct+1)
  { printf("INVALID POSITION");}
 else
 {
  for(ct=1;ct<pos-1;ct++)
   { temp=temp->link; }
  newnode->link=temp->link ;
  temp->link=newnode ;
}
}

void delete()
{
 if(head==NULL)
  { printf("EMPTY LIST");
    exit(0) ;
  }
 else
  {
  int pos,x,ct;
   printf("enter the position of the element to be deleted")
  scanf



int main()
{
int ch;
printf("1.insert\n2.delete\n3.search\n4.traverse\n5.exit")
printf("enter your choice:");
scanf("%d",&ch);
while(1)
{
switch(ch)
{
case 1:
      insert();
      break;
case 2:
      delete();
      break;
case 3:
      search():
      break;
case 4:
      traverse():
      break;
case 5:
     exit(0);
     break;
default:
     printf("enter a valid choice");
}
}
 



}



}
