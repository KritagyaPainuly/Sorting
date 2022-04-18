#include<iostream>
using namespace std;
int merge(int arr[],int beg,int mid,int end)
{
    int i=0,j=0,k=beg;
    int n1=mid-beg;
    int n2=end-mid;
    int larr[n1],rarr[n2];
    for(i=0;i<n1;i++)
    larr[i]=arr[beg+i];
    for(i=0;i<n1;i++)
    rarr[i]=arr[mid+i+1];
    i=0;
    while(i<n1 && j<n2)
    {
      if(larr[i]<=rarr[i)
      {
       arr[k]=larr[i];
       i++;
      }
      else{arr[k]=rarr[j];
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
int main()
{
    int arr[]={2,9,1,2,5,2,8,2,23,11,9,4};
    for(int i=0;i<12;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    mergesort(arr,0,12);
    for(int i=0;i<12;i++)
    cout<<arr[i]<<" ";
}
