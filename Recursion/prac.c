#include<stdio.h>
int power(int x,int n);
int power(int x, int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n>0)
    {
        if(n%2==0)
        {
            return power(2*2,n/2);
        }
        else
        {
            return x*power(2*2,(n-1)/2);
        }
    }
    if(n<0)
    {
        if(n%2==0)
        {
            return power(2*2,-n/2);
        }
        else{
            return 1/x*power(2*2,-(n-1)/2);
        }
    }
}

int main()
{
    float r=power(2,-2);
    printf("%f",r);
    return 0;
}
