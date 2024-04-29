#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=0;
void create(int a[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));//for creting first piont to first node.....
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
//using for loop
// void display(struct Node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ",p->data);
//         p=p->next;
//     }
// }
// using recursive fuction in order
// void display(struct Node *p){
//     if(p!=NULL){
//         printf("%d ",p->data);
//         display(p->next);
//     }
// }
// using recursion to print reverse order
void display(struct Node *p)
{
    if(p!=NULL)
    {
        display(p->next);
        printf("%d \n",p->data);//print elements in returning phase
    }
}
// using iterative
// int countNode(struct Node *p)
// {
//     int count=0;
//     while(p!=0)
//     {
//         count++;
//         p=p->next;
//     }
//     return count;
// }
int count(struct Node *p)
{
    if(p==0)
    {
        return 0;
    }
    else
    {
        return count(p->next)+1;
    }
}
int sumofLL(struct Node *p)
{
    int sum=0;
    while(p!=0)
    {
        sum+=p->data;
        p=p->next;
    }
    return sum;
}
void maxLL( struct Node *p)
{
   int max;
   max=INT32_MIN;
   while(p!=0)
   {
    if(max<p->data)
    {
        max=p->data;
    }
    p=p->next;
   }
   printf("%d ",max);
}
Node * linearSrch(struct Node *p,int key)
{
    while(p!=0)
    {
        if(key==p->data)
        {
              return p;
        }
        p=p->next;
        
    }
    return NULL;
}
int main()
{
    int n,i;
    int a[100];
    printf("Enter size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    create(a,5);
    // display(first);//passing whole a structure
    // printf("%d\n",countNode(first));
    // printf("%d",count(first));
    // printf("%d",sumofLL(first));
    // maxLL(first);
    return 0;
}
