#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
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
    else{
        last->next=t;
        last=t;
    }
}
void removeDupli(){
    struct Node *p,*q;
    int x;
    p=first;
    q=first->next;
    while(p->next!=NULL)//or we can write q
    {
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            x=q->data;
            free(q);
            q=p->next;
        }
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
    int arr[]={12,34,34,56,78,78};
    int i;
    for(i=0;i<6;i++)
    {
        create(arr[i]);
    }
    display(first);
    removeDupli();
    printf("\n");
    display(first);
}
