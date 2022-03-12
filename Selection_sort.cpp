//Q:  Selection Sort 

//NAZMUL ZAMAN-Bsc in (IT)
void swap(int *x,int *y)
#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y)
{
    int temp =  *x;
   *x =  *y;
     *y = temp;
}


void selectionSort(int arr[],int n)
{int i,j,min_indx;
    for( i=0 ;i<n-1; i++)
    {
        min_indx = i;
        for( j = i+1 ;j<n; j++)
            if(arr[j] < arr[min_indx])        
                min_indx = j;

     swap(&arr[min_indx], &arr[i]);     // this is swap function for swap minmum value       
    }
}



void printArray(int arr[],int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
}

int main()
{
     cout<<"Enter the size of an array : ";
    int n;
    cin>>n;
    int arr[n];


    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of index "<<i<<" is : ";
        cin>>arr[i];

    }
     cout<<"Before sorted array is : \n";
       for(int i=0;i<n;i++)
       {
        cout<<arr[i]<<" ";
       }

    selectionSort(arr,n);
    cout<<"\nAfter Sorted array : "<<endl;
    printArray(arr,n);

    return 0;
}
