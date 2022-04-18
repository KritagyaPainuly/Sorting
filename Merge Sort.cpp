#include<iostream>
using namespace std;
void merge(int arr[],int beg,int mid,int end)
{
    
    int n1=mid-beg+1;
    int n2=end-mid;
    int larr[n1],rarr[n2];
    for(int i=0;i<n1;i++)
    larr[i]=arr[beg+i];
    for(int j=0;j<n2;j++)
    rarr[j]=arr[mid+j+1];
    int i=0,j=0,k=beg;
    while(i<n1 && j<n2)
    {
      if(larr[i]<=rarr[j])
      {
       arr[k]=larr[i];
       i++;
      }
      else{
          arr[k]=rarr[j];
          j++;}
      k++;
    }
    while(i<n1)
    {
    arr[k]=larr[i];
     i++; k++;
    }
     while(j<n2)
    {
    arr[k]=rarr[j];
     j++; k++;
    }    
}
void mergesort(int arr[],int beg,int end)
{
   if(beg<end)
  {
    int mid=(beg+end)/2;
    mergesort(arr,beg,mid);
    mergesort(arr,mid+1,end);
    merge(arr,beg,mid,end);
  }
}
void printArray(int a[], int n)  
{  
    for (int i = 0; i < n; i++)  
        cout<<a[i]<<" ";  
}  
int main()  
{  
    int a[]={12,11,10,9,8,7,6,5,4,3,2,1};  
    int n = sizeof(a) / sizeof(a[0]);  
    cout<<"Before sorting array elements are - \n";  
    printArray(a, n);  
    mergesort(a, 0, n - 1);  
    cout<<"\nAfter sorting array elements are - \n";  
    printArray(a, n);  
    return 0;  
}  
