#include<stdio.h>
#include<stdlib.h>

struct Node
{
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
void reverseLink()
{
    struct Node *r,*p,*q;
    p=first;
    q=NULL;
    r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}
void display(struct Node *s)
{
    while(s!=NULL)
    {
        printf("%d=>",s->data);
        s=s->next;
    }
}
int main()
{
    int arr[]={23,45,12,67,89};
    int i;
    for(i=0;i<5;i++)
    {
        create(arr[i]);
    }
    printf("Before linked list:");
    display(first);
    reverseLink();
    printf("\n");
    printf("Reversed linked List:");
    display(first);
    return 0;
}
