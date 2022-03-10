
#include <iostream>
using namespace std;

int main()
{
    cout <<"NAZMUL ZAMAN_20114755055\n\n";

    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n], i, pos;



    cout << "\n\n Enter the " << n << " elements of the array: \n\n";
    for(i=0; i<n; i++)

    {
        cout<<"Give a value for index "<<i<<" : ";
        cin >> arr[i];
    }

    //Printing the original array before deletion
    cout << "\n\n The " << n << " elements of the array, before deletion are : \n\n";
    for(i=0; i<n; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << "\n\n Enter the position, between 1 and " << n << " , of the element to be deleted : ";
    cin >> pos;

    //Performing the deletion logic

    //as index of the element to be deleted is 1 less than it's position
    for (i = pos-1; i <= n; i++)
    {
        arr[i] = arr[i + 1];
    }

    cout << " \n\nThe " << n-1 << " elements of the array, after deletion are : \n\n";
    for(i=0; i<n-1; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << "\n\n";

    return 0;
}
