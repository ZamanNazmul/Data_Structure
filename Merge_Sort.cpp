 #include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid ,int r )
{
   int n1=mid-l+1;
   int n2=r-mid;
   int a[n1];
   int b[n2];

   for(int i=0;i<n1;i++)
   {
       a[i]=arr[l+i];

   }

   for(int i=0;i<n2;i++)
   {
       b[i]=arr[mid +1+i];
   }

   int i=0;
   int j=0;
   int k=l;

   while(i<n1 && j<n2)
   {
       if(a[i]<b[j])
       {
           arr[k]=a[i];
           k++,i++;
       }
       else 
       {
           arr[k]=b[j];
           k++,j++; 
            
       }
   }
   while(i<n1)
   {
          arr[k]=a[i];
           k++,i++;       
   }
   while(i<n2)
   {
        arr[k]=b[j];
           k++,j++;    
   }

}
/* Function to print an array */
void printArray(int arr[], int n)  

{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void mergeSort(int arr[],int l,int r) 
{
    if(l<r) //if l==r then  there will no array for divide  
    {
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r); // till this function we sorted both array 

        merge(arr,l,mid,r); // this function for merger the sorted array 

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
        cout<<"Enter the value of an array "<< i <<" index is  : ";
    cin>>arr[i];

    }
    cout<<"\nbefore sorted the array : ";
     for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";

    }
     mergeSort(arr, 0, n - 1);
	cout << "\nSorted array: \n";
	printArray(arr, n);
	return 0;    
}
