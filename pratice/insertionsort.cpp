#include<iostream>
using namespace std;
int arr[100];
int insertionSort(int n)
{
  int i,j;
  for(i=1;i<n;i++)
  {
    int temp=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>temp)
    {
      arr[j+1]=arr[j];
      j--;

    }
    arr[j+1]=temp;
  }
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
int main()
{
    int n,i;
    cout<<"Enter size of array";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(n);
    return 0;
}
