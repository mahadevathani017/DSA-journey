#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
void create(int value)
{
    struct Node *t,*last;
    t=(struct Node*)malloc(sizeof(struct Node));
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
/*void insert(int pos,int x)
{
    struct Node *t,*p;
    if(pos==0)
    {
        t=(struct Node)malloc(sizeof(struct))
    }
}*/
int main()
{
    int n,i,arr[100];
    printf("Enter number of elements in array");
    scanf("%d",&n);
    printf("Enter elements array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        create(arr[i]);
    }
}
