#include<stdio.h>
int main()
{
    char a[10]="mahadev";
    int i;
    for(i=0;i<7;i++)
    {
        a[i]=a[i]-32;
    }
    for(i=0;i<7;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
