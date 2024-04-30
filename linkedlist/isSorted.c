#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;

}*first=NULL;
void create(int x)
{
    struct Node *t,*last;//last node creted bcs inserting from last end
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
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
    while (p!=NULL)
    {
        printf("%d=>",p->data);
        p=p->next;
    }
}
void main()
{
    int i;
    int arr[]={12,1,45,6,7};
    for(i=0;i<5;i++)
    {
        create(arr[i]);
    }
    display(first);

}
