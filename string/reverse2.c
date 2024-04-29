#include<stdio.h>
int main()
{
    char name[7]="Mahadev";
    char t[7];
    int i;
    for(i=0;i<7/2;i++)
    {
        t[i]=name[7-i-1];
        name[7-i-1]=name[i];
        name[i]=t[i];
    }
    for(i=0;i<7;i++)
    {
        printf("%c",name[i]);
    }
    return 0;
}
