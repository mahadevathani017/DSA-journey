#include<stdio.h>
#include<string.h>
int isvalidString(char *str);
int isvalidString(char *str)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if(!(ch>=65 && ch<=90) && !(ch>=97 && ch<=122) && !(ch>=48 && ch<=57))
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char *name[100];
    int n,i,result;;
    printf("Enter size of string:");
    scanf("%d",&n);
    printf("Enter string:");
    for(i=0;i<n;i++)
    {
        scanf("%c",&name[i]);
    }
    result=isvalidString(&name);
    if(result==1)
    {
        printf("String is valid...");
    }
    else 
    {
        printf("String is not  valid...!");
    }
    return 0;
}
