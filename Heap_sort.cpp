// HeapSort
// Nazmul Zaman Bsc In IT.


#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int i)
{
    int max=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<n && arr[l]>arr[max])
    {
        max=l;
    }

    if(r<n && arr[r]>arr[max])
    {
        max=r;
    }

    if(max != i)
    {
        swap(arr[i],arr[max]);

        heapify(arr,i,max);
    }
}
 

 void heapSort(int arr[],int n)
 {
     for(int i=n/2-1;i>=0 ;i--)
     {
         heapify(arr,n,i);
     }
     
     for(int i=n-1;i>0 ;i--)
     {
         swap(arr[0],arr[i]);
         heapify(arr,i,0);
     }
 }
void printArray (int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    cout<<"Enter the value of array : "<<endl;
        int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of index : "<<i<<endl;
        cin>>arr[i];
    }
    cout<< "before forted : "<<endl;
    
    for(int i=0;i<n;i++)
    {
  
        cout<<arr[i]<<" ";
    }

    cout<<"After sorted : ";


    heapSort(arr,n);
    printArray(arr,n);

}