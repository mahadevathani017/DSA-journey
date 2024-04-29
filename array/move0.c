#include<stdio.h>
//#include"vec.h"
int main()
{
    int arr[15]={1,0,2,3,2,0,0,4,5,1};
    int temp[15];
    int i,j,count=0;
    for(i=0;i<10;i++)
    {
        if(arr[i]==0)
        {
           temp[j]=arr[i];
           j++;
           count++;
        }
    }
    for(i=0;i<count;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
