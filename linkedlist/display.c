#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;

}*first=NULL;

void create(int A[],int n)
{
  int i;
  struct Node *t,*last;
  first=(struct Node *)malloc(sizeof(struct Node)); //fixed
  first->data=A[0];
  first->next=NULL;
  last=first;
  for(i=1;i<n;i++)
  {
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }
}
void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d=>",p->data);
        p=p->next;
    }
}
struct Node* Lsearch(struct Node *p,int key)
{
  while(p!=NULL)
  {
    if(p->data==key)
      return p;
    p=p->next;
    
  }
  return NULL;
}
// void count(struct Node *p)
// {
//   int count=0;
//   while(p!=NULL)
//   {
//     count++;
//     p=p->next;
//   }
// }
struct Node* Rsearch(struct Node *p,int key)
{
  if(p==NULL)
     return NULL;
  if(key==p->data)
     return p;
  return Rsearch(p->next,key);
}
void insert(struct Node *p,int index,int x)
{
  struct Node *t;
  int i;
  if(index<0||index>5)
     return;
  t=(struct Node *)malloc(sizeof(struct Node));
  t->data=x;
   if(index==0)
   {
    t->next=first;
    first=t;
   }
   else
   {
    for(i=0;i<index-1;i++)
       p=p->next;
    t->next=p->next;
    p->next=t;
   }
}
int main()
{
    int A[]={3,5,7,10,15};
    create(A,5);
    display(first);
    insert(first,4,56);
    printf("\n");
    display(first);
    // struct Node *temp;
    // temp=Rsearch(first,154);
    // if(temp)
    // {
    //   printf("Key is found %d\n",temp->data);
    // }
    // else
    // {
    //   printf("Key is not found");
    // }
    return 0;
}
