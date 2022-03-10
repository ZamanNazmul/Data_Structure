#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int key)
{

    for(int i=1;i<=n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;


}


int32_t  main()
{
 

    cout<<"Enter the element you want is array : "<<endl;
     int n;
     cin>>n;
     int arr[n];

     for(int i=1;i<=n;i++)
     {
           cout<<"Give a value for index "<<i<<" : ";
            cin>>arr[i];

     }
        cout<<"Enter the value : "<<endl;
     int key;
     cin>>key;
     cout<<linearSearch(arr,n,key)<<endl;

   return 0;


   }
