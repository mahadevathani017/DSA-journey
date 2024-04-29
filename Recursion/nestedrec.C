#include<stdio.h>
int fun(int n);
int fun(int n)
{

    if(n>10)
    {
        return n-10;
    }
    else
    {
        return fun(fun(n+11));
    }
}
int main()
{
     int r=fun(9);
    printf("%d",r);
    return 0;
}
