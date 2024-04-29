#include<stdio.h>
int main()
{
    char str[]="WELCOME";
    int i;
    for(i=0;i<7;i++)
    {
        str[i]=str[i]+32;
    }
    for(i=0;i<7;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
