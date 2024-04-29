#include<stdio.h>
int stackArray[6],top=-1;
void push(int data);
int pop();
int display();
void push(int data)
{
    if(top==5)
    {
        printf("Can't insert element");
        return;

    }
    top=top+1;
    stackArray[top]=data;
}
int pop()
{
    int value;
    if(top==-1)
    {
       printf("Stack is empty");
       return 0;
    }
    value=stackArray[top];
    return value;
    top=top-1;
}
int display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d ",stackArray[i]);
    }
    return 0;
}
int main()
{
    push(30);
    push(23);
    push(90);
    push(67);
    push(45);
    push(34);
    //push(46);
    pop();
    display();
    return 0;
}
