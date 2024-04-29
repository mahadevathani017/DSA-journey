#include<stdio.h>
int main()
{
    char s[]="Welcome";
    int i,length=0;
    for(i=0;s[i]!='\0';i++)
    {
        length++;
    }
    printf("%d",length);
    return 0;
}
