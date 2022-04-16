#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    int k;
    for(int i=0;i<n;i++)
    {
       for(int j=k=i;j<n;j++)
       {
           if(arr[k]>arr[j])
           k=j;
       }
       int temp=arr[i];
       arr[i]=arr[k];
       arr[k]=temp;       
    }
}
int main()
{
    int arr[]={2,9,1,2,5,2,8,2,23,11,9,4};
    for(int i=0;i<12;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    selectionsort(arr,12);
    for(int i=0;i<12;i++)
    cout<<arr[i]<<" ";
}
