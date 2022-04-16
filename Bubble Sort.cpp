#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    for(int j=0;j<n-1-i;j++)
    if(arr[j]>arr[j+1])  //SWAPING NUMBERS
    {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
}
int main()
{
    int arr[]={2,9,1,2,5,2,8,2,23,11,9,4};
    for(int i=0;i<12;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    bubblesort(arr,12);
    for(int i=0;i<12;i++)
    cout<<arr[i]<<" ";
}
