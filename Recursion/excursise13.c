#include<stdio.h>
int f(int &x,int c);
int f(int &x,int c)
{
    c=c-1;
    if(c==0)
    {
        return 1;
    }
    else{
        x=x+1;
        return f(x,c)*x;
    }

}
int main()
{
    printf("%d",f(5,5));
    return 0;
}
