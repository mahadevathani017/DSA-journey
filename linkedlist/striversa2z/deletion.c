#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
// Node *deleteHead(struct Node *head);
void create(int x)
{
    struct Node *t,*last;
    t=(struct Node*)malloc(sizeof(struct Node));
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
    while(p!=NULL)
    {
        printf("%d=>",p->data);
        p=p->next;
        
    }
   
}
struct Node* deleteHead( struct Node *p){
    if(p==NULL)return p;
    struct Node*temp=p;
    p=p->next;
    free(p);
    return temp;
}
void main()
{
    
    struct Node *q;
    int arr[]={23,45,67,89,90};
    int i;
    for(i=0;i<5;i++)
    {
        create(arr[i]);
    }
    q= deleteHead(first);
    printf("%d",q->data); 
    display(first);
 }

