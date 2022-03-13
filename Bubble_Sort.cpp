//Q:  Bubble  Sort 

//NAZMUL ZAMAN-Bsc in (IT)

#include<bits/stdc++.h>
using namespace std; 

void swap(int *x,int *y) // this funtion for swap minimum value and used pointer
{
    int temp =  *x;
   *x =  *y;
     *y = temp;
}


void Bubble_Sort(int arr[],int n)  // base function for iteration and compair 
{int i,j;
    for( i=0 ;i<n-1; i++) //outer loop for iteration
    {
        //min_indx = i; //i==0; set minimum as first index
        
        for( j = 0 ;j<n-i-1; j++) // inner loop for compair
            
            if(arr[j] > arr[j+1])  // if ture then call swap function 

            
     swap(&arr[j], &arr[j+1]);     // this is swap function for swap minmum value       
    }
}



void printArray(int arr[],int n)  // printing funtion 
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

   Bubble_Sort(arr,n);
    cout<<"\nAfter Sorted array : "<<endl;
    printArray(arr,n);

    return 0;
}
