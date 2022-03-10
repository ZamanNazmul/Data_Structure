///insert element end of the array
#include <bits/stdc++.h>
using namespace std;

int  main()
{
    int i,n,value;
    cout<<" C++ program to insert element at the end of the array\n";
    cout<<"First enter element you want in array\n";
    cin>>n;
   int  arr[n];
    for(i=0;i<n;i++)
    {
       cout<<"Give a value for index "<<i<<" : ";
       cin>>arr[i];
    }
    cout<<"\nGive a value to insert at the first position of the array\n";
     for(i = n; i >= 0; i--) {
      arr[i+1] = arr[i];
   }
    cin>>value;
    arr[0]=value;
    cout<<"Element "<<value<<" is insert at 0 index \n\n";
    cout<<"New Array is :\n\n";
    for(i=0;i<n+1;i++)
    {
        cout<<arr[i]<<"\t";

    }
    return 0;

}

