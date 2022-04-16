#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=arr[i];
        while(j>-1 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main()
{
    int arr[]={2,9,1,2,5,2,8,2,23,11,9,4};
    for(int i=0;i<12;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    insertionsort(arr,12);
    for(int i=0;i<12;i++)
    cout<<arr[i]<<" ";
}
