#include<stdio.h>
#include<stdlib.h>
int arr[]={34,12,56,79,90};
struct Node
{
    int data;
    struct Node* next;
}*first=NULL;
void create(int value)
{
    struct Node*t,*last;
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
    int arr[]={12,4,5,67,89};
    int i;
    for(i=0;i<5;i++)
    {
        create(arr[i]);
    }
    display(first);
    return 0;
}
