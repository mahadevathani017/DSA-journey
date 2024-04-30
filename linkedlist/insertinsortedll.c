#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first=NULL;
int arr[100];
void sortedinsert(int x);
void create(int x);
void create(int x){
    struct Node *t,*last;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(first->next==NULL)
    {  
        first=last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}
void sortedinsert(int x)
{
  struct Node*t,*p,*q;
  p=first;
  q=NULL;
  while(p && p->data<x)
  {
    q=p;
    p=p->next;
  }
  t=(struct Node*)malloc(sizeof(struct Node));
  t->data=x;
  t->next=q->next;
  q->next=t;
}
void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d=>",p->data);
        p=p->next;
    }
}
int main()
{
    int n,i,value;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++){
        create(arr[i]);
    }
    printf("Enter tha value:");
    scanf("%d",&value);
    sortedinsert(value);
    display(first);
    return 0;
}
