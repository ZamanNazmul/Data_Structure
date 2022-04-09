#include<bits/stdc++.h>
using namespace std;
// Returns count of rotations for an array which
// is first sorted in ascending order, then rotated
void countRotations(int arr[], int n)
{
	
	int min = arr[0], min_index;
	for (int i=0; i<n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			min_index = i;
		}
	}
	cout<< "The array roted at "<<min_index<<" times";
}

int main()
{
	int arr[] = {8, 9, 10, 2, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	countRotations(arr, n);
	return 0;
}