#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void createLinkedlist(int value)
{
    struct Node *t,*last;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=value;
    t->next=NULL;
    if(first==NULL)
    {
        first=last=t;
    }
    else{
        last->next=t;
        last=t;
    }
}
void delete(int pos)
{
    struct Node*p,*q=NULL;
    p=first;
    int i;
    for(i=0;i<pos-1;i++)
    {
        p=q;
        p=p->next;
    }
    int x;
    q->next=p->next;
    x=p->data;
    free(p);
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
    int arr[]={12,34,56,78,9};
    int i;
    for(i=0;i<5;i++)
    {
        createLinkedlist(arr[i]);
    }
    delete(3);
    display(first);

}
