#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first=NULL;

void create(int value)
{
    struct Node *t,*last;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=value;
    t->next=NULL;
    if(first==NULL)
    {
        last=first=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}
void reverseEle(struct Node *p)
{
    int A[4];
    p=first;
    int i=0;
    while(p!=NULL)
    {
       A[i]=p->data;
       p=p->next;
       i++;
    }
    p=first;
    i--;
    
    while(p!=first){
      p->data=A[i--];
      p=p->next;
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
void main()
{
    int arr[]={23,12,45,67};
    int i;
    for(i=0;i<4;i++)
    {
        create(arr[i]);
    }
    display(first);
    reverseEle(first);
    printf("\n");
    display(first);
}
