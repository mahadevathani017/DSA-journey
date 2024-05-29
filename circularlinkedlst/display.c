#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head=NULL;

void create(int value)
{
    struct Node *t,*last=NULL;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=value;
    t->next=head;
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

void display(struct Node *h)
{
    do{
        printf("%d=>",h->data);
        h=h->next;
    }while(h!=head);
}

int main()
{
    int arr[]={12,34,56,78,90};
    int i;
    for(i=0;i<5;i++)
    {
        create(arr[i]);
    }
    display(head);

    return 0;
}
