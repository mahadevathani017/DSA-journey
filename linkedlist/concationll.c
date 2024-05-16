#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
}*first=NULL,*second=NULL;

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
void concatLL()
{
    struct Node *p;
    p=first;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=second;
    second=NULL;
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
    int arr1[]={2,9,6,8,10};
    int arr2[]={4,34,7,5,12};
    int i,j;
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
    concatLL();
    // printf("\n");
    display(first);

}
