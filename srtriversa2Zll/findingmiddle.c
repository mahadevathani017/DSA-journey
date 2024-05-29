#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head=NULL;

void create(int value)
{
    struct Node *t,*last;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=value;
    t->next=NULL;
    if(head==NULL)
    {
        head=last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}
int Length(struct Node *p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}
