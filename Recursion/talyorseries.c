#include<stdio.h>
int ex(int x,int n)
{
  static int p=1,f=1;
  int r;
  if(n==0)
  {
    return 1;
  } 
  else{
    r=ex(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
  }  
}
int main()
{
    printf("%d",ex(1,5));
    return 0;
}
