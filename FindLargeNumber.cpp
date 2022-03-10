#include<bits/stdc++.h>
using namespace std;
int main()
{
    int data[100],n,i,j,count=1,max;
    cout<<"Enter the element of an array"<<endl;
    cin>>n;
    cout<<"Enter the value of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>data[i];
    }
    max=data[0];
    for(j=1;j<n;j++)
    {
        if(max<data[j])
        {
            max=data[j];
            count++;

        }
    }

    printf("Largest value in the array is %d and is found in %d th position",max,count++);

}
