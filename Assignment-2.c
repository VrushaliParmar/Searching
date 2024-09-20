#include<stdio.h>

//Function for linear search
int linearSearch(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            return i;     // return the index of the found key
        }
    }
    return -1;       // return -1 if key is not found
}

//Function for binary search (Sorting of array is important)
int binarySearch(int arr[], int size, int key)
{
    int low=0, high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            return mid;     // return the index of the found key
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;    //if key is not found
}

int main()
{
    int arr[]={2,5,9,15,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key, choice, result;
    printf("Enter the number to search:");
    scanf("%d", &key);

    printf("Choose the method to search: 1. Linear Search   2. Binary Search");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        result = linearSearch(arr, size, key);
        printf("Element found at index %d using linear search\n", result);

        break;

        case 2:
        result = binarySearch(arr, size, key);
        printf("Element found at index %d using binary search\n", result);

        break;

        default:
        printf("Invalid choice");
        return 0;
    }
    return 0;
}