#include<stdio.h>
#include<stdlib.h>
int arr[100],x,i;
struct Node{
    int data;
    struct Node *next;
}*first=NULL;
void create(int x){
    struct Node *t,*last;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(first==NULL){
        first=last=t;
    }
    else{
        last->next=t;
        last=t;
    }
}
void Delete(struct Node *p,int pos){
    struct Node *q;
    int x=-1;
    for(i=0;i<pos-1;i++)
    {
        p=q;
        p=p->next;
    }
    q->next=p->next;
    x=p->data;
    free(p);
    printf("%d",x);

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
    int n,i;
    printf("Enter a size of array:");
    scanf("%d",&n);
    printf("Enter elments in  array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        create(arr[i]);
    }
    Delete(first,3);
    display(first);

}
