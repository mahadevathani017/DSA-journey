#include<iostream>
using namespace std;
int main()
{
    int arr[7]={10,20,30,40,30,20,10};
    int i,sol=0;
    for(i=0;i<7;i++)
    {
        sol=sol^arr[i];
    }
    cout<<sol;
    return 0;
}
