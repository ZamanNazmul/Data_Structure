#include <stdio.h>
int  main()
{
    int position, i, n, value,ch, arr[100];
    printf("C Program to insert element at end of Array\n");
    printf("First enter number of elements you want in Array\n");
    scanf("%d", &n);
    arr[n];
   for(i = 0; i < n; i++)


    {
        printf("Please give value for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Let's Insert Element at end \n ");
    printf("Please give a number to insert at end \n");
    scanf("%d", &value);
    arr[n] = value;
    printf("Element %d is inserted at %d index \n",value,n);
    printf("New Array is \n ");

    for(i = 0; i < n+1; i++)
    {
       printf("%d \t",arr[i]);
    }
}





 