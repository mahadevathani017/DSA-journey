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
        last=first=NULL;
    }
    else
    {
        last->next=t;
        last=t;
    }
}
// int track=0;
int llrecursive(struct Node *p)
{
    if(p!=NULL)
    {
        return llrecursive(p->next);
        return p->data;
    }
}
void reverse(int x)
{
    struct Node *t,*last;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    if(first==NULL)
    {
        first=last=NULL;
    }
    else{
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
    int arr[]={34,56,78,90};
    int i,result;
    for(i=0;i<4;i++)
    {
        create(arr[i]);
    }
    display(first);
    result=llrecursive(first);
    reverse(result);
    display(first);
    return 0;

}
