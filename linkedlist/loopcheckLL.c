#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int value)
{
    struct Node *last,*t;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=value;
    t->next=NULL;
    if(first==NULL)
    {
        first=last=NULL;
    }
    else
    {
        last->next=t;
        last=t;
    }

}

int check_loop()
{
    struct Node *p,*q;
    p=first;
    q=first;
    int found =-1;
    do{
        p=p->next;
        if(q!=NULL){
            q=q->next;
        }
        else
        {
            q=NULL;
        }
    }while(p && q);

    if(p==q)
    {
        found=1;
    }
    else
    {
        found=-1;
    }
    return found;
}

void main()
{
    int arr[]={12,34,56,78,90};
    int i;
    for(i=0;i<5;i++)
    {
        create(arr[i]);
    }
    int result;
    result=check_loop();
    if(result==1)
    {
        printf("Linked list is loop");
    }
    else
    {
        printf("Linked list is linear");
    }
}
