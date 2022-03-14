//Q:  Bubble  Sort 
//NAZMUL ZAMAN-Bsc in (IT)
 
 #include<bits./stdc++.h>
 using namespace std;


 void Insertion_Sort(int arr[], int n)
 { int temp;
     for(int i = 1; i<n;  i++)
     {
         int temp =  arr[i];
         int j = i-1;
         while (j >= 0 && arr[j] > temp)
         {
             arr[j+1] = arr[j];   // big value right shift 
            j = j-1;
         }
          arr[j+1] = temp;  // line 17 condision false then set temp value in arr[j+1] place 
     }
 }


void Print_Array(int arr[], int n)
 {
     for(int i = 0;i<n; i++)
     cout << arr[i] << " "; // printing an array with sorting 

 }


 int main()
 {
     cout<<"Enter the size of an array : "<<endl;
     int n,temp;
     cin >> n;
     int arr[n];
     for(int i =0; i<n; i++)
     {
         cout << "Enter the value of index " << i <<" is : "; // this line for taking array value
         cin >> arr[i];
     }
       cout<<"Before sorted array is : \n";
       for(int i=0 ;i<n; i++)
       {
           cout << arr[i] <<" "; // this line for printing user value  before sort
       }
      cout<<"\nAfter Sorted array : " <<endl;
     
    Insertion_Sort(arr, n); // call function 
    Print_Array(arr, n);  // call function 
    return 0;

 }