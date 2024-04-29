#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;

}*first=NULL;

void create(int a[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        t=last;
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
    int arr[100],n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    create(arr,n);
    display(first);
    return 0;
}
