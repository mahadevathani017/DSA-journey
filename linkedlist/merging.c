#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

void create1(int value)
{
    struct Node *last,*t;
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
void create2(int value)
{
    struct Node *last,*t;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=value;
    t->next=NULL;
    if(second==NULL)
    {
        last=second=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}

void mergeLL()
{
    struct Node *last;
    if(first->data<second->data)
    {
        third=last=first;
        first=first->next;
        last->next=NULL;
    }
    else
    {
        third=last=second;
        second=second->next;
        last->next=NULL;
    }
    while(first!=NULL && second!=NULL)
    {
        if(first->data<second->data)
        {
            last->next=first;
            last=first;
            first=first->next;
            last->next=NULL;
        }
        else
        {
            last->next=second;
            last=second;
            second=second->next;
            last->next=NULL;
        }
    }
    if(first!=NULL) last->next=first;
    else last->next=second;
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
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,10};
    int i;
    for(i=0;i<5;i++)
    {
        create1(arr1[i]);
    }
    for(i=0;i<5;i++)
    {
        create2(arr2[i]);
    }
    display(first);
    printf("\n");
    display(second);
    printf("\n");
    mergeLL();
    display(third);
    return 0;
}
