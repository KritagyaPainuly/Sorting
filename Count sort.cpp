#include<iostream>
using namespace std;
int max_ele(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
void countsort(int arr[],int n)
{
    int max=max_ele(arr,n)+1;
    int temp[max];
    for(int i=0;i<max;i++)
    temp[i]=0;
    for(int i=0;i<n;i++)
    temp[arr[i]]++;
    int j=0,i=0;
    while(j<max)
    {
        if(temp[j]>0)
        {
        arr[i]=j;
        temp[j]--;
        i++;
        }
        else
        j++;
    }
}
void printArray(int a[], int n)  
{  
    for (int i = 0; i < n; i++)  
        cout<<a[i]<<" ";  
}  
int main()  
{  
    int a[]={99,11,210,93,83,72,26,35,45,33,12,100};  
    int n = sizeof(a) / sizeof(a[0]);  
    cout<<"Before sorting array elements are - \n";  
    printArray(a, n);  
    countsort(a,n);  
    cout<<"\nAfter sorting array elements are - \n";  
    printArray(a, n);  
    return 0;  
}  
