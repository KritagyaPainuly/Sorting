#include<iostream>
using namespace std;
void swap(int &i,int &j)
{
    int temp=i;
    i=j;
    j=temp;
}
int partiation(int arr[],int l,int h)
{
    int i=l,j=h,pivot=arr[l];
    do
    {
       do{i++;}while(arr[i]<=pivot);
       do{j--;}while(arr[j]>pivot);
       if(i<j)swap(arr[i],arr[j]);
    }while(i<j);
    swap(arr[l],arr[j]);
    return j;
}
void quicksort(int arr[],int l,int h)
{
   int j;
   if(l<h)
   {
       j=partiation(arr,l,h);
       quicksort(arr,l,j);
       quicksort(arr,j+1,h);
   }
}
int main()
{
    int arr[]={2,9,1,2,5,2,8,2,23,11,9,4};
    for(int i=0;i<12;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    quicksort(arr,0,12);
    for(int i=0;i<12;i++)
    cout<<arr[i]<<" ";
}
