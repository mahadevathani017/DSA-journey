#include<stdio.h>
int F[10];
int fib(int n);
int fib(int n)
{
 
   if(n<=1)
    {
        return n;
    }
    else
    {
        if(F[n-2]==-1)
        {
            F[n-2]=fib(n-2);
        }
        if(F[n-1]==-1)
        {
            F[n-1]=fib(n-1);
        }
        return F[n-2]+F[n-1];
    }
     
}
int main()
{
    int n;
    printf("Enter lmit of fibbinacci series=");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        F[i]=-1;
    }
    printf("%d",fib(n));
    return 0;
}
