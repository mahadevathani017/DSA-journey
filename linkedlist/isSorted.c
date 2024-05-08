#include<stdio.h>
#include<stdlib.h>
// int arr[]={34,12,56,79,90};
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
int isSorted()
{
    int x;//track=0;
    x=-32768;
    struct Node *p;
    p=first;
    while(p!=NULL)
    {
        if(p->data<x)
           return 0;
        x=p->data;
        p=p->next;

    }
    
    return 1;
    
}
int main()
{
    int arr[]={12,14,15,16,89};
    int i,found;
    for(i=0;i<5;i++)
    {
        create(arr[i]);
    }
    display(first);
    printf("\n");
    found=isSorted();
    if(found==1)
    {
        printf("Linked list is sorted");
    }
    else{
        printf("Linked list is not sorted");
    }

    return 0;
}

