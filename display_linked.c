#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *next;
}*first=NULL;

void create(int arr[],int n){
int i;

struct node *t, *last;
first=(struct node *)malloc(sizeof(struct node));
first->data=arr[0];
first->next=NULL;
last=first;

for (int i = 1; i <n ; i++)
{
  t= (struct node *)malloc(sizeof(struct node));
  t->data=arr[i];
  t->next=NULL;
  last->next=t;
  last=t;
}
}

// void Display(struct node*p){
// while (p!=NULL)
// {
//     printf("%d",p->data);
//   p=p->next;
// }
void Rdisplay(struct node *p){
   if (p!=NULL)
   {
    printf("%d",p->data);
    Rdisplay(p->next);
   }
   
}





int main() {
struct Node *temp;
int arr[]={1,2,3,4,5};
create(arr,5);
Rdisplay(first);
return 0;
}





