#include <bits/stdc++.h>
using namespace std;
int BainarySearch(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;

        if(key==arr[mid])

        {
            return  mid;
        }



        else if(key>arr[mid])
        {
           s = mid+1;
        }
        else
        {

           e = mid-1;
        }

    }

   return -1;
}


int32_t  main()
{

     int n;
     cin>>n;
     
            
            
        //cout<<"Enter the element you want is array : "<<endl;
                 
     int arr[n];

     for(int i=0;i<n;i++)
     {
      //  cout<<"Give a value for index "<<i<<" : ";
            cin>>arr[i];
    
     }


     int key;
     cin>>key;
            cout<<BainarySearch(arr,n,key);

     return 0;
 }
