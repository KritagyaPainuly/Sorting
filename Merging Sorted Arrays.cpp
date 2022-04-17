#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void merge(int arr[],int arr1[],int n,int m,int arr2[])
{
    int i=0,j=0;
    for(int k=0;k<(n+m);k++)
    {
        if(arr[i]<=arr1[j]){
           arr2[k]=arr[i];
           i++;
        }
        else
        {
            arr2[k]=arr1[j];
            j++;
        }
    }
}
int main()
{
    int arr1[]={1,2,3,4};
    int arr[]={3,5,7,8,9};
    display(arr1,4);
    display(arr,5);
    int arr2[9];
    merge(arr1,arr,4,5,arr2);
    display(arr2,9);
}
