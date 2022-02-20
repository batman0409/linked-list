#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*first=NULL;

void create(int arr[], int n){
struct node *t, *last;
int i=1;
first=(struct node *)malloc(sizeof(struct node));
first->data=arr[0];
first->next=NULL;
last=first;

for (int i = 1; i <n; i++)
{
  t=(struct node *)malloc(sizeof(struct node));
  t->data=arr[i];
  t->next=NULL;
  last->next=t;
  last=t;
}
}
int cntt(struct node *p){
    int c=0;
   while (p!=NULL)
   {
       c++;
     p=p->next;
     
   }
   return c;
    
}


int sum(struct node *p){
    int b=0;
    while (p!=NULL)
    {
     b=b+p->data; 
     p=p->next; 
    }
    return b;
}

struct node*  search(struct node *p , int key){
  struct node *temp;
  while (p!=NULL)
  {
   if (key==p->data)
   {
     temp->next=p->next;
     p->next=first;
     p=first;
    return p;
   }
   temp=p;
   p=p->next;
  }
  return NULL;
}



int main(){
  struct node *key;

int arr[]={1,2,3,90,5,6,7, 7,7};
create(arr,9);
printf("length is %d \n", cntt(first));
printf("sum is %d \n", sum(first));

printf("%d",key);
key= search(first,90);
    return 0;
}
