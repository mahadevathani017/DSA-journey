#include<stdio.h>
#include<stdlib.h>
struct array
{
    int A[10];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
        
    }
    printf("\n");
}
void append(struct array *arr,int x)//to modify the value we have pass by adress...0
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length++]=x;

    }
}
void insert(struct array *arr,int index,int x)
{ 
    int i;
    
    if(index>=0 && index<=arr->length)
    {
       for(i=arr->length;i>index;i--)
       {
        arr->A[i]=arr->A[i-1];
       }
       
       arr->A[index]=x;
       arr->length++;
       
    }
    else
    {
        printf("Insertion is not possible...!");
    }
}
int delete(struct array *arr,int index)
{
    int i;
    if(index>=0 && index<arr->length)
    {
        int x=arr->A[index];
        for(i=index;i<arr->length-1;i++)
          {
             arr->A[i]=arr->A[i+1];
          }
          arr->length--;
          return x;
    }
    return 0;
}
int main()
{
    struct array arr={{23,34,56,78,89},10,5};
    //append(&arr,10);
    //insert(&arr,9,90);
    
    printf("%d\n",delete(&arr,3));
    display(arr);
}
