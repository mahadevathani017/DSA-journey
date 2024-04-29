#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
}*first=0;
void create(int a[], int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    for()
}
