#include<stdio.h>
#include<stdlib.h>
int arr[100];
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
void insert(int x);
void insert(int x){
    struct Node *t,*last;
    t=(struct Node*)malloc(sizeof(struct Node));
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
void display(struct Node *p){
    if(p!=NULL)
    {
        printf("%d=>",p->data);
        display(p->next);
    }
}
void main()
{
    int i,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elemnts in array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        // int t=arr[i];
        insert(arr[i]);
    }
    display(first);
}
