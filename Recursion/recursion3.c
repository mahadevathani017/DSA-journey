#include<stdio.h>
int fun(int n)
{
    if(n>0)
    {
        return fun(n-1)+n;
    }
    return 0;// act like default else condition
}
int main()
{
    int x=5;
    printf("%d",fun(x));
    return 0;
}
