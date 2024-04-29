#include<stdio.h>
#include<math.h>
int binarytoDecimal(int n);
int binarytoDecimal(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return (n%10+binarytoDecimal(n/2)*binarytoDecimal(n/2));
    }
}
int main()
{
    int x,result;
    printf("Enter  binary number");
    scanf("%d",&x);
    result=binarytoDecimal(x);
    printf("%d",result);
    return 0;
}
