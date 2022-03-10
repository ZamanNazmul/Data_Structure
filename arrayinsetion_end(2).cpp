///insert element end of the array+
#include <bits/stdc++.h>
using namespace std;

int  main()
{
    int i,n,value,arr[100];
    cout<<" C++ program to insert element at the end of the array\n";
    cout<<"First enter element you want in array\n";
    cin>>n;
    arr[n];
    for(i=0;i<n;i++)
    {
       cout<<"Give a value for index "<<i<<" : ";
       cin>>arr[i];
    }
    cout<<"\nGive a value to insert at the end of the array\n\n";
    cin>>value;
    arr[n]=value;
    cout<<"Element "<<value<<" is insert at "<<i<<" index \n\n";
    cout<<"New Array is :\n\n";
    for(i=0;i<n+1;i++)
    {
        cout<<arr[i]<<"\t";

    }
    return 0;

}

