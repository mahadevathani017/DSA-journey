#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[100]="Anand Kumar Hooda";
    char shortName[100]={0},temp[100]={0};
    int i,k=0,j=0,len=0;
    for(int m=0;name[m]!='\0';m++)
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        if(name[i]==' ' && name[i+1]!=' ')
        {
            shortName[k++]=name[i+1];
            shortName[k++]='.';
            k++;
        }
    }
    for(i=len-1;name[i]!=' ';i--)
    {
        temp[j++]=name[i];
    }
     
    cout<<name[0]<<'.'<<shortName<<strrev(temp);                  
 
    return 0;
}
