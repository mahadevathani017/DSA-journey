#include<stdio.h>
void TOH(int n,char source,char temp,char des);
void TOH(int n,char source,char temp,char des)
{
    if(n>0)
    {
        int step;
        step=0;
        
        TOH(n-1,source,des,temp);
        printf("Disk %d move from %c to %c\n",n,source,des);
        TOH(n-1,temp,source,des);
        
    }
}
int main()
{
    int n;
    printf("Enter number of disks");
    scanf("%d",&n);
    TOH(n,'s','t','d');
    return 0;
}
