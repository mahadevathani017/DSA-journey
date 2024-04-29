#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string name="Akash kumar hooda";
    string temp;
    int i,k=0,len;
    len=name.size();
    for(i=0;i<len;i++)
    {
        if(name.at(i)==' ' && name.at(i+1)!=' ')
        {
            temp.at(k++ )=name.at(i+1);
            temp.at(k++)='.';
        }
    }
    cout<<temp;
    return 0;

    
}
