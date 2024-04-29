#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first;
int main()
{
    struct Node *head;
    head=(struct Node *)malloc(sizeof(struct Node));
    head->data=45;
    head->next=NULL;
    printf("%d ",head->data);
}
