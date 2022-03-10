#include <iostream>
using namespace std;
int main()
{
   int array[100], position, i, n, value;

       cout<<" C++ program to insert element at the end of the array\n";
    cout<<"First enter element you want in array\n";

   cin>>n;



   for (i = 0; i < n; i++)
   {
    cout<<"Give a value for index "<<i<<" : ";
    cin>>array[i];
    }


   cout<<"Enter the location where you wish to insert an element\n"<<endl;
   cin>>position;
   cout<<"Enter the value to insert\n"<<endl;
   cin>>value;


   for (i = n - 1; i >= position - 1; i--)
    {
        array[i+1] = array[i];
    }


	array[position-1] = value;


        cout<<"Element "<<value<<" is insert at "<<position-1<<" index \n\n";
    cout<<"New Array is :\n\n";

   for (i = 0; i <n+1; i++)
   {
      cout<<array[i]<<"\t";
         }
   return 0;
}

