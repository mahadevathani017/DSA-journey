#include<stdio.h>
int sumNaturalnumber(int n);
int sumNaturalnumber(int n)
{
    if(n==0 )
    {
        return 0;
    }
    else 
    {
        return (sumNaturalnumber(n-1)+n);
    }
}
int main()
{
    int x;
    printf("Enter a number=");
    scanf("%d",&x);
    int result=sumNaturalnumber(x);
    printf("%d",result);
    return 0;
}
